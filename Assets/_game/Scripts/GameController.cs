using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

public class GameState
{
    public IReadOnlyReactiveProperty<int> CurrentDay => currentDay;
    private readonly IReactiveProperty<int> currentDay = new ReactiveProperty<int>(0);

    public void SetDay(int day)
    {
        currentDay.Value = day;
    }

    public void AdvanceDay()
    {
        currentDay.Value++;
    } 

}

public class GameController : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The length of a day in seconds")]
    private int lengthOfDay = 10;

    public GameState State = new GameState();

    void Start()
    {
        State.SetDay(0);
        
        //Scheduler.Immediate.Schedule(TimeSpan.FromSeconds(10),() =>
        //{
        //    State.AdvanceDay();
        //});
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
