using UnityEngine;

[RequireComponent(typeof(Light))]
public class DayNightCycle : MonoBehaviour
{
    [SerializeField] private float dayDuration = 30f; // Duration of a full day cycle (day + night) in seconds
    [SerializeField] private Material skyboxMaterial;

    private Light sun;
    private float rotationSpeed;

    private GameState gameState;

    void Start()
    {
        this.gameState = FindObjectOfType<GameController>().State;

        sun = GetComponent<Light>();
        rotationSpeed = 360f / dayDuration;

        if (skyboxMaterial != null)
        {
            RenderSettings.skybox = skyboxMaterial;
            
        }
    }

    private float time = 0;
    void Update()
    {
        // Rotate the sun based on time elapsed
        float angle = Time.deltaTime * rotationSpeed;

        time += angle;
        if(time >= 360f)
        {
            time -= 360f;
            gameState.AdvanceDay();
        }

        sun.transform.Rotate(new Vector3(angle, 0, 0));

        // Adjust intensity for nighttime
        float currentSunElevation = sun.transform.eulerAngles.x;
        //if (previous % 360f > currentSunElevation % 360f)
        //{
        //    gameState.AdvanceDay();
        //}
        // Adjust intensity for nighttime and update Skybox exposure
        if (currentSunElevation >= 180)
        {
            // Nighttime: reduce intensity so that it's dark but still visible.
            sun.intensity = Mathf.Lerp(sun.intensity, 0.1f, Time.deltaTime);

            // Set Skybox exposure to 0.25 during nighttime
            skyboxMaterial.SetFloat("_Exposure",
                Mathf.Lerp(skyboxMaterial.GetFloat("_Exposure"), 0.25f, Time.deltaTime));
            RenderSettings.ambientIntensity = Mathf.Lerp(RenderSettings.ambientIntensity, 0.7f, Time.deltaTime);
        }
        else
        {
            // Daytime: restore the original intensity.
            sun.intensity = Mathf.Lerp(sun.intensity, 1f, Time.deltaTime);
            RenderSettings.ambientIntensity = Mathf.Lerp(RenderSettings.ambientIntensity, 1f, Time.deltaTime);
            // Set Skybox exposure to 1 during daytime
            skyboxMaterial.SetFloat("_Exposure", Mathf.Lerp(skyboxMaterial.GetFloat("_Exposure"), 1f, Time.deltaTime));
        }
    }
}