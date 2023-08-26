<?php 
$id = $_GET['id'];
$name = $_GET['name'];
$cou = $_GET['cou'];
$pno = $_GET['pno'];
$conn=mysqli_connect("localhost","root","","db1");
$sql = "select * from student where id=$id";
$res = $conn->query($sql);
if(mysqli_num_rows($res)>0){
	echo "User id alredy exist";
}
else{
   if($name=="" && $cou=="" && $pno==""){
   	echo "All fields are required.";
   }
   else{
   	$sql1 = "insert into student (id,name,cou,pno) values ('$id','$name','$cou','$pno')";
   if($conn->query($sql1)===TRUE){
   	echo "User added successfully.";
   }
   }
}
?>