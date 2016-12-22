<?php

// FACEBOOK INCLUDE

require './facebook/src/facebook.php';

define('FACEBOOK_APP_ID', '2004197666950'); // TODO
define('FACEBOOK_SECRET', 'cb73ea046564aec30fe764814e136c');// TODO


function redirect($fb) 
{ 
	$loginUrl=$fb->getLoginUrl(array(
	'display'=>'page',
	'redirect_uri'=>'http://apps.facebook.com/unity_test_two/', // TODO
	'scope'=>'publish_stream' // if you want to publish sth on users wall
	));
	?>
	
	<script>
	top.location="<?php echo $loginUrl; ?>";
	</script>
	
	<?php
	exit();
} // end redirect function


// ********************************************************************************************************
// COMMON SOURCE

//$cookie = get_facebook_cookie(FACEBOOK_APP_ID, FACEBOOK_SECRET);

// Create our Application instance.
$facebook = new Facebook(array(
  'appId'  => FACEBOOK_APP_ID,
  'secret' => FACEBOOK_SECRET
));

$UID = $facebook->getUser();

$ME = null;
// Session based API call.
if ($UID) 
{
  try 
  {
    $ME = $facebook->api('/me');
  } 
  catch (FacebookApiException $e) 
  {
    echo $e . "<br />";
  }
}

if(null == $ME)
{
	redirect($facebook);
}

// internet explorer workaround
header('P3P: CP="CAO PSA OUR"');

?>