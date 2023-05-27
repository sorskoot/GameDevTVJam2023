using System;
using UniRx;
using UnityEngine;

public class GrowthAreaState : IDisposable
{
    private readonly CompositeDisposable subscriptionTracker = new CompositeDisposable();

    private readonly GameState gameState;
    
    public IReadOnlyReactiveProperty<Soil> CurrentSoil => currentSoil;
    private readonly IReactiveProperty<Soil> currentSoil = new ReactiveProperty<Soil>(Soil.Grass);

    public IReadOnlyReactiveProperty<Plant> CurrentPlant => currentPlant;
    private readonly IReactiveProperty<Plant> currentPlant = new ReactiveProperty<Plant>(null);


    private int LastDayWithAction = -1;

    public GrowthAreaState(GameState gameState)
    {
        this.gameState = gameState;
        this.gameState.CurrentDay.Subscribe(CurrentDayChanged).AddTo(subscriptionTracker);
    }

    private void CurrentDayChanged(int day)
    {
        if (day > LastDayWithAction + 2)
        {
            if (currentSoil.Value == Soil.Wet)
            {
                currentSoil.Value = Soil.Dirt;
            }
            else if (currentSoil.Value == Soil.Dirt)
            {
                currentSoil.Value = Soil.Grass;
                if (currentPlant.Value != null)
                {
                    currentPlant.Value.KillPlant();
                }
            }

        }

    }

    public void Plant(Plant plant)
    {
        if (currentSoil.Value == Soil.Wet)
        {
            currentPlant.Value = plant;
        }
    }

    public void RemovePlant()
    {
        currentPlant.Value.DestroyPlant();
    }

    public void Hoe()
    {
        LastDayWithAction = gameState.CurrentDay.Value;

        if (currentSoil.Value == Soil.Grass)
        {
            currentSoil.Value = Soil.Dirt;
        }
    }

    public void Water()
    {
        LastDayWithAction = gameState.CurrentDay.Value;

        if (currentSoil.Value == Soil.Dirt)
        {
            currentSoil.Value = Soil.Wet;
        }
    }

    public void Dispose()
    {
        subscriptionTracker.Dispose();
    }

    public Plant GetPlant()
    {
        return currentPlant?.Value.GetComponent<Plant>();
    }
}