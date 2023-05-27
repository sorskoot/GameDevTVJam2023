using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UniRx;
using UnityEngine;
using UnityEngine.Serialization;


[RequireComponent(typeof(SpriteRenderer))]
public class Plant : MonoBehaviour
{
    [SerializeField] private int GrowthStage = 0;

    [SerializeField] private Sprite[] GrowthSprites;

    [SerializeField] private Sprite seed;

    [SerializeField] private Sprite Harvest;
    
    [SerializeField] private Sprite Death;

    [SerializeField] private int price;
    [SerializeField] private int profit;
    [SerializeField] private int growthTime; // in days

    public int Profit => this.profit;
    public int Price => this.price;
    public Sprite Seed => this.seed;
    

    private SpriteRenderer spriteRenderer;
    
    private GameController gameController;
    private int dayPlanted;
    private bool isHarvestable = false;
    private bool isDead = false;


    private void Start()
    {
        gameController = FindObjectOfType<GameController>();

        spriteRenderer = this.GetComponent<SpriteRenderer>();
        
        gameController.State.CurrentDay.Subscribe(OnNewDay).AddTo(this);
        this.dayPlanted = gameController.State.CurrentDay.Value;

        GrowthStage = 0;
        spriteRenderer.sprite = GrowthSprites[this.GrowthStage];

        isHarvestable = false;
        isDead = false;
    }


    private void OnNewDay(int day)
    {
        if (isDead)
        {
            return;
        }

        int growingInDays = day - dayPlanted;

        if (growingInDays > this.growthTime + 2)
        {
            KillPlant();
            return;
        }

        if (growingInDays >= this.growthTime)
        {
            spriteRenderer.sprite = this.GrowthSprites[3];
            isHarvestable = true;
            return;
        }

        // Have the plant grow in stages. Have 1 sprite for every stage. There are 3 stages.
        if (growingInDays > 0)
        {
            // calculate the stage of the plant
            int stage = (int) Math.Floor(growingInDays / (double) growthTime * 3);
            spriteRenderer.sprite = this.GrowthSprites[stage];
        }
    }

    public bool IsDead()
    {
        return isDead;
    }

    public bool IsHarvestable()
    {
        return isHarvestable;
    }

    public void HarvestCrop()
    {
        gameController.HarvestCrop(this);
    }

    public void DestroyPlant()
    {
        Destroy(this.gameObject);
    }

    public void KillPlant()
    {
        spriteRenderer.sprite = Death;
        isHarvestable = false;
        isDead = true;
    }
}
