<?php
	$arr=array(
				array(1,0,0,1),
				array(0,1,1,0),
				array(1,0,0,1)
				);
	for($i=0;$i<count($arr);$i++)
	{
		for($j=0;$j<count($arr[$i]);$j++)
		{	
			echo $arr [$i] [$j];
		}
	echo "<br>";
	}
?>