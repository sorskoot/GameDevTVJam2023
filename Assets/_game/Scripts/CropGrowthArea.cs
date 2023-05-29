using System;
using UniRx;
using UnityEngine;
using UnityEngine.Analytics;

public class CropGrowthArea : MonoBehaviour
{
    [SerializeField] private Sprite dirt;
    //private GameObject plantReference;

    private GameState gameState;

    [SerializeField] private Sprite grass;

    private GrowthAreaState growthAreaState;

    private bool hasPlant = false;

    [SerializeField] private Plant plant;

    [SerializeField] private SpriteRenderer soil;

    [SerializeField] private GameObject SplashEffect;
    [SerializeField] private GameObject HarvestEffect;

    [SerializeField] private Sprite wetDirt;

    [SerializeField] private GameObject canPlace;
    [SerializeField] private GameObject cannotPlace;
    [SerializeField] private GameObject highLightCrop;

    private bool isHovering = false;

    // Start is called before the first frame update
    void Start()
    {
        hasPlant = false;
        canPlace.SetActive(false);
        cannotPlace.SetActive(false);
        highLightCrop.SetActive(false);

        gameState = FindObjectOfType<GameController>().State;
        growthAreaState = new GrowthAreaState(gameState);
        soil.sprite = grass;

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
            growthAreaState.Plant(plantObject.GetComponent<Plant>());
            hasPlant = true;
        }

        if (plant == null && hasPlant)
        {
            growthAreaState.RemovePlant();
            hasPlant = false;
        }
    }

    public void SetPlant()
    {
        Plant currentPlant = null;

        if (hasPlant)
        {
            currentPlant = growthAreaState.GetPlant();
        }

        if (gameState.SelectedTool.Value == Tool.WateringCan
            && growthAreaState.CurrentSoil.Value == Soil.Dirt
            )
        {
            if (currentPlant == null || !currentPlant.IsHarvestable())
            {
                growthAreaState.Water();
                FindObjectOfType<SFXController>().PlayWateringCan();
                var splash = Instantiate(SplashEffect, transform.position, Quaternion.identity);
                splash.transform.Rotate(0, 90, 0);
                OnHoverExit();
                return;
            }
        }

        if (hasPlant && currentPlant != null)
        {
            if (currentPlant.IsHarvestable())
            {
                var harvest = Instantiate(HarvestEffect, transform.position, Quaternion.identity);
                harvest.GetComponentInChildren<SpriteRenderer>().sprite = currentPlant.HarvestSprite;

                hasPlant = false;
                plant = null;
                currentPlant.HarvestCrop();
                growthAreaState.RemovePlant();

                FindObjectOfType<SFXController>().PlayHarvest();
            }

            if (gameState.SelectedTool.Value == Tool.Rake)
            {
                if (currentPlant.IsDead())
                {
                    hasPlant = false;
                    plant = null;
                    growthAreaState.RemovePlant();
                    FindObjectOfType<SFXController>().PlayRake();
                }
            }
        }
        else
        {
            if (gameState.SelectedTool.Value == Tool.Hoe && growthAreaState.CurrentSoil.Value == Soil.Grass)
            {
                growthAreaState.Hoe();
                FindObjectOfType<SFXController>().PlayHoe();
                return;
            }

            if (gameState.CanPlantSelected() && growthAreaState.CurrentSoil.Value == Soil.Wet)
            {
                var selectedPlant = gameState.SelectedPlant.Value.GetComponent<Plant>();
                gameState.SubtractMoney(selectedPlant.Price);
                FindObjectOfType<SFXController>().PlayPlant();
                plant = selectedPlant;
                OnHoverExit();
                return;
            }

            FindObjectOfType<SFXController>().PlayFailSound();
        }
    }

    public void OnHoverEnter()
    {
        isHovering = true;

        if (!hasPlant)
        {
            if (gameState.CanPlantSelected() && growthAreaState.CurrentSoil.Value == Soil.Wet)
            {
                var selectedPlant = gameState.SelectedPlant.Value.GetComponent<Plant>();
                var sprite = selectedPlant.HarvestSprite;
                highLightCrop.GetComponent<SpriteRenderer>().sprite = sprite;
                highLightCrop.SetActive(true);
                return;
            }
            if (gameState.SelectedTool.Value == Tool.Hoe && growthAreaState.CurrentSoil.Value == Soil.Grass)
            {
                canPlace.SetActive(true);
                return;
            }
        }
        else
        {
            if (plant.IsHarvestable())
            {
                canPlace.SetActive(true);
                return;
            }
            if (plant.IsDead() && gameState.SelectedTool.Value == Tool.Rake)
            {
                canPlace.SetActive(true);
                return;
            }

        }

        if (gameState.SelectedTool.Value == Tool.WateringCan && growthAreaState.CurrentSoil.Value == Soil.Dirt)
        {
            canPlace.SetActive(true);
            return;
        }

        cannotPlace.SetActive(true);
    }

    public void OnHoverExit()
    {
        canPlace.SetActive(false);
        cannotPlace.SetActive(false);
        highLightCrop.SetActive(false);
        isHovering = false;
    }

    private void Dispose()
    {
        growthAreaState.Dispose();
    }
}