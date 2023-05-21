using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropGrowthArea : MonoBehaviour
{
    [SerializeField]
    private Plant plant;
    
    private bool hasPlant = false;
    private GameObject plantReference;

    private GameController gameController;

    // Start is called before the first frame update
    void Start()
    {
        hasPlant = false;
        gameController = FindObjectOfType<GameController>();
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
        if (gameController.State.SelectedPlant.HasValue)
        {
            var selectedPlant = gameController.State.SelectedPlant.Value.GetComponent<Plant>();
            this.plant = selectedPlant;
        }
    }
}
