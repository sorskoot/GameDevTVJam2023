using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

public class GameState
{
    public IReadOnlyReactiveProperty<int> CurrentDay => currentDay;
    private readonly IReactiveProperty<int> currentDay = new ReactiveProperty<int>(0);

    public IReadOnlyReactiveProperty<GameObject> SelectedPlant => selectedPlant;
    private readonly IReactiveProperty<GameObject> selectedPlant = new ReactiveProperty<GameObject>(null);

    public void SetDay(int day)
    {
        currentDay.Value = day;
    }

    public void AdvanceDay()
    {
        currentDay.Value++;
    }

    public void SetSelectedPlant(GameObject plant)
    {
        selectedPlant.Value = plant;
    }

}

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
        State.SetDay(0);

        //Scheduler.Immediate.Schedule(TimeSpan.FromSeconds(10),() =>
        //{
        //    State.AdvanceDay();
        //});

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
}
