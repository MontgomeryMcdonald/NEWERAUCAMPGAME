using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public float movespeed = 10f;
    public float jumpheight = 5f;
    public float rotateSpeed = 75f;
    public Rigidbody rig;
    public Camera cam;
    public int coinCount;
    public int Health;

    public bool IsAlive = true;


    void Move()
    {
        // moves the player :D. gets input axis with magical means
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");
        Vector3 rotation = Vector3.up * x;
        Quaternion angleRot = Quaternion.Euler(rotation * Time.fixedDeltaTime);

        Vector3 dir = (transform.forward * z + transform.right * x) * movespeed;

        dir.y = rig.velocity.y;

        rig.velocity = dir;
        //rig.MoveRotation(rig.rotation * angleRot);
    }


    void TryJump()
    {
        // create a ray facing down
        Ray ray = new Ray(transform.position, Vector3.down);
        //shoot the raycast
        if (Physics.Raycast(ray, 6.5f))
        {
            Debug.Log("HELP");
            rig.AddForce(Vector3.up * jumpheight, ForceMode.Impulse);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Move();
        // handles input for movement

        if (Input.GetKeyDown(KeyCode.Space))
        {
            TryJump();
        }
    }
}
