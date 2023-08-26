<?php

$v1 = 28;
$v2 = 2;

if($v1+$v2==30)
{
    $x = true;

}
elseif($v1==30 || $v2==30)
{
    $x = true;
}
else{
    $x = false;
}

echo var_dump($x);
?>