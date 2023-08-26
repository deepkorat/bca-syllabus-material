<?php 

/* 5.Create a form contaning one input field(Pro_id) and a search button. When the user
clicks on the Search button a PHP script should get executed and should display the
details of the product for the Pro_id specified. */
include 'DbConfig.php';
$id = $_POST['id'];

if(!$con){
	echo "error".mysqli_connect_error();
}
else{
	echo "connection successful.<br>";
}
$sql = "select * from product where id = $id";
$result = $con->query($sql);
if(mysqli_num_rows($result)){
	while ($data = $result->fetch_assoc()) {
		echo "Id : ".$data['id']."<br>Name : ".$data['name']."<br>Price : ".$data['price']."<br>Qoh : ".$data['qoh'];
	}
}
else{
	echo "0 Record found";
}
?>