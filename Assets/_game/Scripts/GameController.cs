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

    float timer = 0;
    void Update()
    {
        timer += Time.deltaTime;
        if (timer > lengthOfDay)
        {
            State.AdvanceDay();
            timer = 0;
        }
    }

    public void HarvestCrop(Plant plant)
    {
        State.AddMoney(plant.Profit);
    }
}
