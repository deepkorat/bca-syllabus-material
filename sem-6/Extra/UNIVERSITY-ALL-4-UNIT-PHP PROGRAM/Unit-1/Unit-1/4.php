<?php
	$sub=array(1,2,3,4,5);
	print("this is count" . count($sub));

	for($i=0; $i<count($sub) ;$i++)
	{
		echo $sub [$i]."<br>";
	}
	
	foreach($sub as $key)
	{
		echo $key."<br>";
	}

$sub=array(
	"English" => 12,
	"Maths" => 34,
	"Science" => 67);

	foreach($sub as $subject=>$mark)
	{
	echo "you got $mark mark in $subject <br>";
	}

?>
		