<?php
include('inc.php');
include('header.php');
?>
<center>
	
	
<!-- ******************************************** -->	
<!-- SCRIPT STUFF EXPORTED/CREATED BY UNITY BUILD -->	
<!-- ******************************************** -->	

	<p class="header"><span>Unity Web Player | </span>WebPlayer</p>
	<div class="content">
		<div id="unityPlayer">
			<div class="missing">
				<a href="http://unity3d.com/webplayer/" title="Unity Web Player. Install now!">
					<img alt="Unity Web Player. Install now!" src="http://webplayer.unity3d.com/installation/getunity.png" width="193" height="63" />
				</a>
			</div>
		</div>
	</div>
	<p class="footer">&laquo; created with <a href="http://unity3d.com/unity/" title="Go to unity3d.com">Unity</a> &raquo;</p>


	

	
<!-- ************************************** -->	
<!-- FUNCTIONS FOR COMMUNICATION WITH UNITY -->	
<!-- ************************************** -->	
<script language="javascript1.1" type="text/javaScript">
<!--
	//
	// called from Unity3d
	
	function RequestFacebookProfile()
	{
		// $ME was set by inc.php
		var name = '<?php echo $ME['name']; ?>';
		var photoUrl = '<?php echo 'https://graph.facebook.com/'.$UID.'/picture'; ?>';
		
		// send answer to Unity3d
	    SetFacebookProfileName( name ); 
		SetFacebookProfilePhoto( photoUrl );
	}
	
	function SetFacebookProfileName( a_username )
	{
		GetUnity().SendMessage("GetProfile", "SetFacebookProfileName", a_username);
	}
	function SetFacebookProfilePhoto( a_photoUrl ) 
	{
		GetUnity().SendMessage("GetProfile", "SetFacebookProfilePhoto", a_photoUrl);
	}
-->
</script>

</center>	
<?php 
include('footer.php');
?>