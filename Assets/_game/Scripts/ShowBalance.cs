using TMPro;
using UniRx;
using UnityEngine;

public class ShowBalance : MonoBehaviour
{
    [SerializeField] TMP_Text tmpText;

    void Start()
    {
        var gameState = FindObjectOfType<GameController>().State;

        gameState.Balance.Subscribe(OnBalanceChanged).AddTo(this);
    }

    private void OnBalanceChanged(int balance)
    {
        tmpText.text = balance.ToString("C0");
    }
}
