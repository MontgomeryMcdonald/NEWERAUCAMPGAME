using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLine : MonoBehaviour
{
    // Start is called before the first frame update
    public GameManager Manager;

       private void OnTriggerEnter(Collider other)
    {
        Manager.endGame();
    }
}
