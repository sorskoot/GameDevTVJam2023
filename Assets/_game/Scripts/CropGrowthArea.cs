using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
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
    private GameObject plantReference;

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
            plantReference = Instantiate(plant.gameObject, gameObject.transform);
            hasPlant = true;
        }

        if (plant == null && hasPlant)
        {

            Destroy(plantReference);
            hasPlant = false;
        }
    }

    public void SetPlant()
    {
        if (this.plant != null)
        {
            var currentPlant = this.plantReference.GetComponent<Plant>();
            if (currentPlant.IsHarvestable())
            {
                currentPlant.HarvestCrop();
                this.plant = null;
                FindObjectOfType<SFXController>().PlaySuccessSound();
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