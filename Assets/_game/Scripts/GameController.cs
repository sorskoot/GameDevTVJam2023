using UnityEngine;

public class GameController : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The length of a day in seconds")]
    private int lengthOfDay = 10;

    [SerializeField]
    private Plant[] plants;

    public GameState State = new GameState();

    void Start()
    {
        State.Reset();

        State.SetSelectedPlant(plants[0].gameObject);
    }

    public void HarvestCrop(Plant plant)
    {
        State.AddMoney(plant.Profit);
    }
}
