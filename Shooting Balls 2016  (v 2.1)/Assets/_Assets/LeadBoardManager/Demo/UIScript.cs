using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIScript : MonoBehaviour {
    public Text Nom;
    public Text Score;
    

    public void AddScore () {       
        leadboard.AddNewHighscore (Nom.GetComponent<Text> ().text, int.Parse(Score.GetComponent<Text> ().text));
    }
	

	public void LoadHighscore () {
        Application.LoadLevel ("highscore");
	}
}
