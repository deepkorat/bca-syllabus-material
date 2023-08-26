<!-- 4. Create a form containing a combobox with some product names as items.
 Whenever a user selects a particular product from the combobox, it should be 
 sent to the server asynchronously (i.e. without pressing the submit button). Implement using AJAX -->
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
<form>
	Select Product :<select id="s1" onchange="handleChange()">
		<option>select</option>
<?php 
$con = mysqli_connect("localhost","root","","db1");
$sql = "select * from product";
$res = $con->query($sql);
while ($data = $res->fetch_assoc())
 {?>
   <option value="<?php echo $data['id']; ?>"><?php echo $data['name']; ?></option>
   <?php } ?>
	</select>
	<p id="demo"></p>
</body>
<script>
	const handleChange = ()=>{
		const id = document.getElementById("s1").value
        const xml = new XMLHttpRequest();
        xml.open("GET","4_1.php?id="+id,true)
        xml.send();
        xml.onreadystatechange = function(){
		if(this.readyState===4 && this.status===200){
		 document.getElementById("demo").innerHTML=this.responseText;
		}
	}
	}
</script>
</html>