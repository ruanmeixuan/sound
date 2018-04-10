<?php
$log_file = 'sound_log.txt';
$data = $_POST['data'];
$today = date("Y-m-d H:i:s");
$str = $today .', '.$data."\n";
//This is fro the server
//now we open the file
if(file_exists($log_file)){
	$fp = fopen($log_file, "a");
	fwrite($fp, $str);
	fclose($fp);
}
else{
//the file does not exist, create a new one
	$fp = fopen($log_file, "w");
	fwrite($fp, $str);
	fclose($fp);
}
echo "Data is stored.\n";
?>