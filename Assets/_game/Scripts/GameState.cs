using System.Diagnostics;
using UniRx;
using UnityEditor.Tilemaps;
using UnityEngine;

public class GameState
{
    public IReadOnlyReactiveProperty<int> CurrentDay => currentDay;
    private readonly IReactiveProperty<int> currentDay = new ReactiveProperty<int>(0);

    public IReadOnlyReactiveProperty<GameObject> SelectedPlant => selectedPlant;
    private readonly IReactiveProperty<GameObject> selectedPlant = new ReactiveProperty<GameObject>(null);

    public IReadOnlyReactiveProperty<int> Balance => balance;
    private readonly IReactiveProperty<int> balance = new ReactiveProperty<int>(0);
    public IReadOnlyReactiveProperty<Tool> SelectedTool => selectedTool;
    private readonly IReactiveProperty<Tool> selectedTool = new ReactiveProperty<Tool>(Tool.None);

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
        if (plant != null)
        {
            selectedTool.Value = Tool.None;
        }

        selectedPlant.Value = plant;
    }

    public void Reset()
    {
        this.currentDay.Value = 0;
        this.selectedPlant.Value = null;
        this.balance.Value = 5;
    }

    public void AddMoney(int amount)
    {
        balance.Value += amount;
    }
    public void SubtractMoney(int amount)
    {
        balance.Value -= amount;
    }

    public bool CanPlantSelected()
    {
        return this.selectedPlant != null &&
               this.SelectedPlant.HasValue && 
               this.Balance.Value >= this.SelectedPlant.Value.GetComponent<Plant>().Price;
    }

    public void SetSelectedTool(Tool tool)
    {
        if (tool != Tool.None)
        {
            selectedPlant.Value = null;
        }

        selectedTool.Value = tool;

    }
}