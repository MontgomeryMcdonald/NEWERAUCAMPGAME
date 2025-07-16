using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Threading;
using TMPro;

public class GameManager : MonoBehaviour
{
    [Header("Game Variables")]
    public PlayerController player;
    //public RigidBody playerObj;
    public float time;
    public bool timeActive;

    [Header("Countdown UI")]
    public int countdown;
    public TMP_Text CountdownText;

    [Header("Game UI")]
    public TMP_Text TimeTXT;
    public TMP_Text HealthTXT;
    public TMP_Text CoinsTXT;




    [Header("Screens")]
    public GameObject countdownUI;
    public GameObject GameUI;
    public GameObject endUI;

    [Header("End Screen UI")]
    public TMP_Text EndScore;
    public TMP_Text EndTime;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player").GetComponent<PlayerController>();

        // make sure the timer is set to 0
        time = 0;
        // disable player movement
        player.enabled = false;

        // start countdown coroutine

        // one screen please
        set_screen(countdownUI);
        StartCoroutine(CountdownRoutine());

    }

    IEnumerator CountdownRoutine()
    {
        CountdownText.gameObject.SetActive(true);
        countdown = 3;
        while (countdown > 0)
        {
            CountdownText.text = countdown.ToString();
            yield return new WaitForSeconds(1f);
            countdown--;
        }
        CountdownText.text = "GO!";
        yield return new WaitForSeconds(1f);

        player.enabled = true;
        // enable player movement please
        // start the game 
        // add code here
        startGame();

    }

    void startGame()
    {
        // turn on cool screen
        set_screen(GameUI);
        timeActive = true;
    }
    public void endGame()
    {
        timeActive = false;
        player.enabled = false;
        player.rig.velocity = Vector3.zero;
        EndScore.text = "Score: " + player.coinCount;
        EndTime.text = "Time: " + time.ToString("F2");
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        set_screen(endUI);
    }


    public void onRestartButton()
    {
        SceneManager.LoadScene(0);
    }


    // Update is called once per frame
    void Update()
    {
        // keep track of the time that passes
        if (timeActive)
        {
            time += Time.deltaTime;


        }
        CoinsTXT.text = "Coins: " + player.coinCount;
        HealthTXT.text = "Health: " + player.Health;
        TimeTXT.text = "Time: " + (time).ToString("F2");
    }

    void set_screen(GameObject screen)
    {
        countdownUI.SetActive(false);
        GameUI.SetActive(false);
        endUI.SetActive(false);
        //disable all other screens, enable this screen
        // add code here for that first part

        //activate inputted screen
        screen.SetActive(true);

    }

}
