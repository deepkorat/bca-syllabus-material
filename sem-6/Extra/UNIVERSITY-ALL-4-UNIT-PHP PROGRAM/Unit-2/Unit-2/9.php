<?php
$con = mysqli_connect("localhost", "root", "", "bca");
if (!$con) {
    echo "Error" . mysqli_connect_error();
    die();
} else {
    echo "Connection Successful..<br>";
}
for ($i = 1; $i <= 1000; $i++) {
    if ($i % 2 == 0) {
        $sql1 = "insert into even (even) values ($i)";
        $con->query($sql1);
    } else {
        $sql2 = "insert into odd (odd) values ($i)";
        $con->query($sql2);
    }
    $cnt = 0;
    for ($j = 2; $j < $i; $j++) {
        if ($i % $j == 0) {
            $cnt = 1;
            break;
        } else {
            $cnt = 2;
        }
    }
    if ($cnt == 2) {
        $sql3 = "insert into prime (prime) values ($i)";
        $con->query($sql3);
    }
}
echo "Data inserted successfully..";

?>