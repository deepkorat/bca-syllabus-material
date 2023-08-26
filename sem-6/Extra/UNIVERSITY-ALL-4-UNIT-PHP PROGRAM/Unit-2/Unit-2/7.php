<?php 

/*7.Create a form contaning one input field(Pro_id) and a Delete button. When the user
clicks on the Delete button a PHP script should get executed and should delete the
record of the product for the Pro_id specified. */
include 'DbConfig.php';
$id = $_POST['id'];

if(!$con){
	echo "error".mysqli_connect_error();
}
else{
	echo "connection successful.<br>";
}
$sql = "delete from product where id = $id";
$con->query($sql);
if($con->affected_rows>0){
	echo "Record deleted successfully..";
}
else{
	echo "Invalid user id";
}
?>