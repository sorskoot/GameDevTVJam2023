using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;


[RequireComponent(typeof(SpriteRenderer))]
public class Plant : MonoBehaviour
{
    [SerializeField] private int GrowthStage = 0;

    [SerializeField] private Sprite[] GrowthSprites;

    [SerializeField] private Sprite Seed;

    [SerializeField] private Sprite Harvest;

    private SpriteRenderer spriteRenderer;

    private void Start()
    {
        spriteRenderer = this.GetComponent<SpriteRenderer>();

        var gameController = FindObjectOfType<GameController>();
        gameController.State.CurrentDay.Subscribe(OnNewDay).AddTo(this);

        GrowthStage = 0;
        spriteRenderer.sprite = GrowthSprites[this.GrowthStage];
    }

    private void OnNewDay(int day)
    {
        Debug.Log(day);
        this.Grow();
    }

    private void Grow()
    {
        if (this.GrowthStage < this.GrowthSprites.Length)
        {
            this.GrowthStage++;
            spriteRenderer.sprite = GrowthSprites[Mathf.Min(this.GrowthStage, this.GrowthSprites.Length-1)];
        }
    }
}
