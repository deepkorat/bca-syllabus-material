<?php 
$name =$_GET['str'];
$x = strlen($name);
if($x<5){
	if($name==""){
		 echo "Please Enter Something.";
	}
	else
    {
        echo "Length greater than 5";
    }
}
?>