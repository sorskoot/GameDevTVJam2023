using UnityEngine;

public class SFXController : MonoBehaviour
{
    [SerializeField] private AudioClip fail;
    [SerializeField] private AudioClip success;
    [SerializeField] private AudioClip harvest;
    [SerializeField] private AudioClip hoe;
    [SerializeField] private AudioClip plant;
    [SerializeField] private AudioClip rake;
    [SerializeField] private AudioClip wateringCan;
    [SerializeField] private AudioClip rooster;

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

    public void PlayHarvest()
    {
        audioSource.PlayOneShot(harvest);
    }
    public void PlayHoe()
    {
        audioSource.PlayOneShot(hoe);
    }
    public void PlayPlant()
    {
        audioSource.PlayOneShot(plant);
    }
    public void PlayRake()
    {
        audioSource.PlayOneShot(rake);
    }

    public void PlayWateringCan()
    {
        audioSource.PlayOneShot(wateringCan);
    }

    public void PlayRooster()
    {
        audioSource.PlayOneShot(rooster);
    }

}

