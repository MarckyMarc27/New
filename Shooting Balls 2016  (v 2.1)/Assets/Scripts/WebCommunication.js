#pragma strict

var m_guiTexture : GUITexture;
var m_guiText : GUIText;


function Start()
{	
	// javascript function we call to get our profile from facebook
	Application.ExternalCall( "RequestFacebookProfile" );
}

// called by javascript (from web)
function SetFacebookProfileName( a_username : String ) 
{
	m_guiText.text = a_username;
}

// called by javascript (from web)
function SetFacebookProfilePhoto( a_photoUrl : String ) 
{
    // Start a download of the given URL
    var www : WWW = new WWW (a_photoUrl);
    
    // Wait for download to complete
    yield www;
    
    // Print the error to the console
    if (www.error != null)
    {
        Debug.Log(www.error); 
    }
    else
    {
    	var newTextureFromWeb : Texture2D = www.texture; 
    		
    	m_guiTexture.texture = newTextureFromWeb; 	
    	m_guiTexture.pixelInset = Rect (0, 0, newTextureFromWeb.width, newTextureFromWeb.height);
    }
}

function OnGUI()
{
	if( GUI.Button(Rect(Screen.width*0.5-64, Screen.height*0.5, 128, 24), "Post sth to my wall!") )
	{
		PublishToWall();
	}
}

function PublishToWall()
{
	var form : WWWForm = new WWWForm();
   	var url : String = "http://vidiludi.com/facebook/unity3dexample/publishtowall.php"; // TODO
   	form.AddField("description", "PLACE DESCRIPTION HERE"); // TODO
   	form.AddField("msg", "PLACE MESSAGE HERE"); // TODO
   	var www : WWW = new WWW(url, form);
  	yield www;
  	if (www.error != null) 
  	{ 
  		Debug.Log(www.error); 
  	}
  	Debug.Log("FaceBook Publish"); 
}

