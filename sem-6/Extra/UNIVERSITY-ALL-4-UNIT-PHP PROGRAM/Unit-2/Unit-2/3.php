<?php  
/*3.Write a PHP script for creating a product table in the specified database with fields
Pro_id, Pro_name, Pro_price, QOH. Also display an acknowledgement for the same. */

include "DbConfig.php";

if(!$con){
	echo "Error".mysqli_connect_error();
	die();
}
else{
	echo "Connection succesful<br>";
}
$sql = "create table product(
id INT(10) PRIMARY KEY,
name VARCHAR(20) NOT NULL,
price INT(10) NOT NULL,
qoh INT(10) NOT NULL
)";
if($con->query($sql)===TRUE){
	echo "Table created successfully.";
}
else{
	echo "Table already exist".$con->error;
}
$con->close();
?>