<!-- • Write a PHP program to find the largest of three numbers using ternary Operator. -->

<?php

$num1 = 20;
$num2 = 35;
$num3 = 15;

echo $num1."<br>";
echo $num2."<br>";
echo $num3."<br>";



$larg = ($num1 > $num2) 
    ? (($num1 > $num3) ? $num1 : $num3) 
    : (($num2 > $num3) ? $num2 : $num3);


echo "The largest number is: $larg";
?>


