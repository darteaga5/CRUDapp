<?php
    define('DB_USER','root');
    define('DB_PASSWORD','EVevTFObaI');
    define('DB_HOST','127.0.0.1');
    define('DB_NAME','movieDB');


	$conn = mysqli_connect(DB_HOST, DB_USER, DB_PASSWORD, DB_NAME);
    
    if (!$conn) {
      die("Connection failed: " . mysqli_connect_error());
    }
?>
