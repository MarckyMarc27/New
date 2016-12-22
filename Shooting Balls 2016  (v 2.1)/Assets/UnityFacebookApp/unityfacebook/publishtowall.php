<?php

include('inc.php');

$message = $_POST['msg'];
$description = $_POST['description'];

$attachment =  array(
	'access_token' => $session["access_token"],
	'message' => $message, 
	'name' => "unity3d-example", // TODO
	'link' => "http://apps.facebook.com/unity_example", // TODO
	'description' => $description,
	'picture' => 'http://vidiludi.com/facebook/soulmate-finder/gfx/logo.jpg' // TODO
	);
$facebook->api("/me/feed", 'POST', $attachment);

?>