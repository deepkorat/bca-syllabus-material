<?php  
// 2.Write a PHP script for that creates a database named "DB-1"in MySQL. 
$host = "localhost";
$user = "root";
$pass = "";
$con = mysqli_connect($host,$user,$pass);
if(!$con){
	echo "Error".mysqli_connect_error();
	die();
}
else{	
	echo "Connection successful..<br>";
}
$sql = "create database db1";
if($con->query($sql)===TRUE){
	echo "Database created successful..";
}
else{
	echo "Database alredy exist..".$conn->error;
}
$con->close();
?>