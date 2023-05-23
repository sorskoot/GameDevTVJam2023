using UnityEngine;

public class SeedSelectionController : MonoBehaviour
{
    [SerializeField]
    private Plant seedSelection;

    private GameState gameState;

    void Start()
    {
        this.gameState = FindObjectOfType<GameController>().State;
    }

    public void SetSelection()
    {
        gameState.SetSelectedPlant(seedSelection.gameObject);
    }
}
