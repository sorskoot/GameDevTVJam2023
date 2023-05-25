using System.Collections;
using System.Collections.Generic;
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

    private void Start()
    {
        gameController = FindObjectOfType<GameController>();

        spriteRenderer = this.GetComponent<SpriteRenderer>();
        
        gameController.State.CurrentDay.Subscribe(OnNewDay).AddTo(this);

        GrowthStage = 0;
        spriteRenderer.sprite = GrowthSprites[this.GrowthStage];
    }

    private void OnNewDay(int day)
    {
        this.Grow();
    }

    private void Grow()
    {
        if (this.GrowthStage < this.GrowthSprites.Length-1)
        {
            this.GrowthStage++;
            spriteRenderer.sprite = GrowthSprites[Mathf.Min(this.GrowthStage, this.GrowthSprites.Length-1)];
        }
    }

    public bool IsHarvestable()
    {
        return this.GrowthStage == this.GrowthSprites.Length-1;
    }

    public void HarvestCrop()
    {
        gameController.HarvestCrop(this);
    }
}
