using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickups : MonoBehaviour
{
    public PlayerController player;
    public int CoinValue;



    // Start is called before the first frame update
    void Start()
    {
        // grab player ref
        player = GameObject.Find("Player").GetComponent<PlayerController>();

    }


   void OnTriggerEnter(Collider other)
    {
        if(other.name == "Player")
        {
        player.coinCount += CoinValue;
            Destroy(this.gameObject);
;        }
        
    }

}
