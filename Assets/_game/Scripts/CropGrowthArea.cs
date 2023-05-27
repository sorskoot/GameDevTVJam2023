using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
using Unity.VisualScripting;
using UnityEngine;

public class CropGrowthArea : MonoBehaviour
{
    [SerializeField]
    private Plant plant;

    [SerializeField]
    private SpriteRenderer soil;

    [SerializeField]
    private Sprite grass;

    [SerializeField]
    private Sprite dirt;

    [SerializeField]
    private Sprite wetDirt;

    private bool hasPlant = false;
    //private GameObject plantReference;

    private GameState gameState;
    private GrowthAreaState growthAreaState;

    // Start is called before the first frame update
    void Start()
    {
        hasPlant = false;
        gameState = FindObjectOfType<GameController>().State;
        growthAreaState = new GrowthAreaState(gameState);
        this.soil.sprite = grass;

        growthAreaState.CurrentSoil.Subscribe(OnSoilChanged).AddTo(this);

    }

    private void OnSoilChanged(Soil soil)
    {
        switch (soil)
        {
            case Soil.Grass:
                this.soil.sprite = grass;
                break;
            case Soil.Dirt:
                this.soil.sprite = dirt;
                break;
            case Soil.Wet:
                this.soil.sprite = wetDirt;
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(soil), soil, null);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (plant != null && !hasPlant)
        {
            var plantObject = Instantiate(plant.gameObject, gameObject.transform);
            this.growthAreaState.Plant(plantObject.GetComponent<Plant>());
            hasPlant = true;
        }

        if (plant == null && hasPlant)
        {
            this.growthAreaState.RemovePlant();
            hasPlant = false;
        }
    }

    public void SetPlant()
    {
        if (hasPlant)
        {
            var currentPlant = this.growthAreaState.GetPlant();
            if (currentPlant.IsHarvestable())
            {
                hasPlant = false;
                plant = null;
                currentPlant.HarvestCrop();
                this.growthAreaState.RemovePlant();
                FindObjectOfType<SFXController>().PlaySuccessSound();
            }

            if (gameState.SelectedTool.Value == Tool.Rake)
            {
                if (currentPlant.IsDead())
                {
                    hasPlant = false;
                    plant = null;
                    this.growthAreaState.RemovePlant();
                }
            }
        }
        else
        {
            if (gameState.SelectedTool.Value == Tool.Hoe && growthAreaState.CurrentSoil.Value == Soil.Grass)
            {
                growthAreaState.Hoe();
                return;
            }

            if (gameState.SelectedTool.Value == Tool.WateringCan && growthAreaState.CurrentSoil.Value == Soil.Dirt)
            {
                growthAreaState.Water();
                return;
            }

            

            if (gameState.CanPlantSelected() && growthAreaState.CurrentSoil.Value == Soil.Wet)
            {
                var selectedPlant = gameState.SelectedPlant.Value.GetComponent<Plant>();
                gameState.SubtractMoney(selectedPlant.Price);
                this.plant = selectedPlant;
                return;
            }


            FindObjectOfType<SFXController>().PlayFailSound();

        }
    }

    private void Dispose()
    {
        growthAreaState.Dispose();
    }
}