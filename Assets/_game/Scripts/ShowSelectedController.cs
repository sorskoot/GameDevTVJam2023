using UniRx;
using UnityEngine;

public class ShowSelectedController : MonoBehaviour
{
    [SerializeField] private SpriteRenderer selectedSeed;
    [SerializeField] private GameObject Hoe;
    [SerializeField] private GameObject Rake;
    [SerializeField] private GameObject WateringCan;


    private GameState gameState;

    void Start()
    {
        Hoe.SetActive(false);
        Rake.SetActive(false);
        WateringCan.SetActive(false);
        selectedSeed.gameObject.SetActive(false);

        gameState = FindObjectOfType<GameController>().State;
        gameState.SelectedPlant.Subscribe(OnSelectedPlantChanged).AddTo(this);
        gameState.SelectedTool.Subscribe(OnSelectedToolChanged).AddTo(this);
    }

    private void OnSelectedPlantChanged(GameObject selectedPlant)
    {
        if (selectedPlant == null)
        {
            selectedSeed.gameObject.SetActive(false);
        }
        else
        {
            Plant plant = selectedPlant.GetComponent<Plant>();
            selectedSeed.gameObject.SetActive(true);
            selectedSeed.sprite = plant.Seed;
        }
    }

    private void OnSelectedToolChanged(Tool selectedTool)
    {
        Hoe.SetActive(false);
        Rake.SetActive(false);
        WateringCan.SetActive(false);
       
        switch (selectedTool)
        {
            case Tool.Hoe:
                Hoe.SetActive(true);
                break;
            case Tool.Rake:
                Rake.SetActive(true);
                break;
            case Tool.WateringCan:
                WateringCan.SetActive(true);
                break;
        }
    }
}
