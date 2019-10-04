<?php
$conn = getenv("MYSQLCONNSTR_localdb"); // this will return the whole connectionstring in a single string
$conarr2 = explode(";",$conn); // Let's beautify it, by splitting it and decorating it in an array
$conarr = array();
foreach($conarr2 as $key=>$value){
    $k = substr($value,0,strpos($value,'='));
    $conarr[$k] = substr($value,strpos($value,'=')+1);
}
print_r($conarr); // $conarr is an array of values of connection string
?>