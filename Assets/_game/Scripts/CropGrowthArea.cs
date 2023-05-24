using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropGrowthArea : MonoBehaviour
{
    [SerializeField]
    private Plant plant;
    
    private bool hasPlant = false;
    private GameObject plantReference;

    private GameState gameState;

    // Start is called before the first frame update
    void Start()
    {
        hasPlant = false;
        gameState = FindObjectOfType<GameController>().State;
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
            if(currentPlant.IsHarvestable())
            {
                currentPlant.HarvestCrop();
                this.plant = null;
                FindObjectOfType<SFXController>().PlaySuccessSound();
            }
        }
        else
        {
            if (gameState.CanPlantSelected())
            {
                var selectedPlant = gameState.SelectedPlant.Value.GetComponent<Plant>();
                gameState.SubtractMoney(selectedPlant.Price);
                this.plant = selectedPlant;
            }else
            {
                FindObjectOfType<SFXController>().PlayFailSound();
            }
        }
    }
}
