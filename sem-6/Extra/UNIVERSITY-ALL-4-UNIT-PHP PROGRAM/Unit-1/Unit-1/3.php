<?php
	$age=38;
	if($age<18)
	{
		echo"you can not drive";
	}
	elseif($age>18)
	{
		echo"you can drive<br>";
	}
	
	$favcolor="black";
	
	
?>switch($favcolor)
	{
		case "black":
		echo"your favourite color is black";
		break;
		
		case "blue":
		echo"your favourite color is blue";
		break;
		
		case "green":
		echo"your favourite color is green";
		break;
		
		default:
		echo"your favourite color nither black,blue nor green";
	}
		
		
	
	