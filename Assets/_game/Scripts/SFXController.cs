using UnityEngine;

public class SFXController : MonoBehaviour
{
    [SerializeField] private AudioClip fail;
    [SerializeField] private AudioClip success;

    private AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public void PlayFailSound()
    {
        audioSource.PlayOneShot(fail);
    }

    public void PlaySuccessSound()
    {
        audioSource.PlayOneShot(success);
    }

}
