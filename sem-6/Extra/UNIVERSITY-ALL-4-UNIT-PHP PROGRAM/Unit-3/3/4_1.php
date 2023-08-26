<?php 
$con = mysqli_connect("localhost","root","","db1");
$id = $_GET['id'];
$sql = "select * from product where id = $id";
$res = $con->query($sql);
while ($data = $res->fetch_assoc()) {
	 echo "<br>Product Id : ".$data['id']."<br>";
    echo "Product Name : ".$data['name']."<br>";
    echo "Product Price : ".$data['price']."<br>";
    echo "Product QOH : ".$data['qoh']."<br>";
}
?>