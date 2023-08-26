<?php 

/*6. Create a form contaning two input fields (Pro_id, QOH) and Update button. When the
user clicks on the Update button the quantity of the Pro_id specified should get updated
using a PHP script. */
include 'DbConfig.php';
$id = $_POST['id'];
$qoh = $_POST['qoh'];

if(!$con){
	echo "error".mysqli_connect_error();
}
else{
	echo "connection successful.<br>";
}
$sql = "update product set qoh = $qoh where id = $id";
$res = $con->query($sql);
if($con->affected_rows>0){
	echo "Data updated succesfully<br>";
  $sql1 = "select * from product where id = $id";
  $result = $con->query($sql1);
  while($data=$result->fetch_assoc()){
		echo "Id : ".$data['id']."<br>Name : ".$data['name']."<br>Price : ".$data['price']."<br>Qoh : ".$data['qoh'];
  }
}
else{
	echo "Invalid Product id";
}
?>