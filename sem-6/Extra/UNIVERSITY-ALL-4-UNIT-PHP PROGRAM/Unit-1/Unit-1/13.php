<?php

$arr = array(
    "Sophia" => 31,
    "Jacob" => 41,
    "William" => 39,
    "Ramesh" => 40
);

asort($arr);

foreach($arr as $k=>$v)
{
    echo "<h1>" . $k . " => " . $v . "</h1>";
}
echo "<br>";

ksort($arr);

foreach($arr as $k=>$v)
{
    echo "<h1>" . $k . " => " . $v . "</h1>";
}
echo "<br>";
arsort($arr);

foreach($arr as $k=>$v)
{
    echo "<h1>" . $k . " => " . $v . "</h1>";
}
echo "<br>";

krsort($arr);

foreach($arr as $k=>$v)
{
    echo "<h1>" . $k . " => " . $v . "</h1>";
}


?>
