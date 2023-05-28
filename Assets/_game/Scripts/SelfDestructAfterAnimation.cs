using UnityEngine;


public class SelfDestructAfterAnimation : MonoBehaviour 
{
    public void SelfDestruct()
    {
        Destroy(this.gameObject);
    }
}
