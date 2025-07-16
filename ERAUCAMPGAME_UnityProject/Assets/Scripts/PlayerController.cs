using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Windows;
using Input = UnityEngine.Input;

public class PlayerController : MonoBehaviour
{

    public float movespeed = 10f;
    public float jumpheight = 5f;
    public float rotateSpeed = 75f;
    public Rigidbody rig;
    public Camera cam;
    public int coinCount;
    public int Health;
    public GameObject playerObj;


    public Animator anim;
    public bool IsAlive = true;


    void Move()
    {
        // moves the player :D. gets input axis with magical means
        float x = Input.GetAxis("Horizontal");
        float z = -Input.GetAxis("Vertical");
        Vector3 moveDir = playerObj.transform.forward * z + playerObj.transform.right * x;
        rig.AddForce(moveDir.normalized * movespeed * 10f, ForceMode.Force);
        Vector3 flatVel = new Vector3(rig.velocity.x, 0f, rig.velocity.z);

        if (flatVel.magnitude > movespeed)
        {
            Vector3 limitedVel = flatVel.normalized * movespeed;
            rig.velocity = new Vector3(limitedVel.x, rig.velocity.y, limitedVel.z);
        }
        //Vector3 rotation = Vector3.up * x;
        //Quaternion angleRot = Quaternion.Euler(rotation * Time.fixedDeltaTime);

        //Vector3 dir = (transform.forward * z + transform.right * x) * movespeed;
        

        //dir.y = rig.velocity.y;

        //rig.velocity = dir;
        //rig.MoveRotation(rig.rotation * angleRot);

        if (Mathf.Abs(x) > 0.1f || Mathf.Abs(z) > 0.1)
        {
            anim.SetBool("isRunning", true);
        }
        else { anim.SetBool("isRunning", false); }
    }

            void TryJump()
            {
                // create a ray facing down
                Ray ray = new Ray(transform.position, Vector3.down);
                //shoot the raycast
                if (Physics.Raycast(ray, 6.5f))
                {
            anim.SetTrigger("isJumping");
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

        if(health <= 0)
        {
            anim.SetBool("isAlive", true);
            StartCoroutine("DieToDeath");
        }
    }

    IEnumerator DieToDeath()
    {
        yield return new WaitForSeconds(2f);
        SceneManager.LoadScene(0);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.name == "Enemy")
        {
            Health--;
        }
        if (other.gameObject.name == "FallCollider")
        {
            SceneManager.LoadScene(0);
        }
    }

}
