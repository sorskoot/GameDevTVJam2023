using UniRx;
using UnityEngine;

public class ShowSelectedController : MonoBehaviour
{
    [SerializeField] private SpriteRenderer selectedSeed;

    private GameState gameState;

    void Start()
    {
        gameState = FindObjectOfType<GameController>().State;
        gameState.SelectedPlant.Subscribe(OnSelectedPlantChanged).AddTo(this);
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
}
