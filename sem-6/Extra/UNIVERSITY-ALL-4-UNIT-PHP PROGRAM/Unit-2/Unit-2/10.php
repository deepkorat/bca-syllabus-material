<?php 

// 10. Write a PHP Program that will filter data from the table mentioned below.

include 'DbConfig.php';
if(!$con){
	echo "Error".mysqli_connect_error();
	die();
}
else{
	echo "Connection Successful..<br>";
}
$sql1 = "SELECT * FROM emp WHERE sal > 2500";
$result = $con->query($sql1);
echo "<b>a) List all the Employees having salaries more than 2500.</b><br><br>";
if(mysqli_num_rows($result)>0){
  while($data = $result->fetch_assoc()){
  	echo "EMPNO :".$data['no']."<br>ENAME :".$data['name']."<br>JOB :".$data['job']."<br>HIREDATE :".$data['hdate']."<br>MGR :".$data['mgr']."<br>SAL :".$data['sal']."<br>COMM :".$data['comm']."<br>DEPTNO :".$data['depno']."<br><br>";
  }
}

$sql2 = "SELECT * FROM `emp` GROUP BY depno";
$result = $con->query($sql2);
echo "<b>b) List all the Employees Department Wise.</b><br><br>";
if(mysqli_num_rows($result)>0){
  while($data = $result->fetch_assoc()){
  	echo "EMPNO :".$data['no']."<br>ENAME :".$data['name']."<br>JOB :".$data['job']."<br>HIREDATE :".$data['hdate']."<br>MGR :".$data['mgr']."<br>SAL :".$data['sal']."<br>COMM :".$data['comm']."<br>DEPTNO :".$data['depno']."<br><br>";
  }
}

$sql3 = "SELECT * FROM emp WHERE no BETWEEN 7600 AND 7800";
$result = $con->query($sql3);
echo "<b>c) List all the Employees having Employee Number between 7600 - 7800.</b><br><br>";
if(mysqli_num_rows($result)>0){
  while($data = $result->fetch_assoc()){
  	echo "EMPNO :".$data['no']."<br>ENAME :".$data['name']."<br>JOB :".$data['job']."<br>HIREDATE :".$data['hdate']."<br>MGR :".$data['mgr']."<br>SAL :".$data['sal']."<br>COMM :".$data['comm']."<br>DEPTNO :".$data['depno']."<br><br>";
  }
}
?>