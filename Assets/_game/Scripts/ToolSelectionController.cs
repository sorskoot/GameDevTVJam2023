using UnityEngine;

public class ToolSelectionController : MonoBehaviour
{
    [SerializeField] private Tool toolSelection;

    private GameState gameState;

    void Start()
    {
        this.gameState = FindObjectOfType<GameController>().State;
    }

    public void SetSelection()
    {
        gameState.SetSelectedTool(this.toolSelection);
    }
}
