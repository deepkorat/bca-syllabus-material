<?php 

// 4.Create a form contaning four input fields(Pro_id, Pro_name, Pro_price, QOH) and
// Submit button. When the user clicks on the submit button an PHP script should be
// executed which inserts the record in the product table. 
include 'DbConfig.php';
if(!$con){
	echo "Error".mysqli_connect_error();
	die();
}
else{
	echo "connection successful.<br>";
}
$id = $_POST['id'];
$name = $_POST['name'];
$price = $_POST['price'];
$qoh = $_POST['qoh'];

$sql = "insert into product (id,name,price,qoh) values ('$id','$name','$price','$qoh')";

if($con->query($sql)===TRUE){
	echo "Data inserted successfully.";
}
else{
	echo "Id is already used for another product".$con->error;
}
$con->close();
?>