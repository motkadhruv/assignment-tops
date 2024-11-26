<!-- Write a program to find whether a number is Armstrong or not 
Write a program to print the below format :
5 9
2610
3711
4812 -->


<?php

function Armstrong($num) {
    
    $numStr = (string)$num;
    $numDig = strlen($numStr);


    $sum = 0;
    for ($i = 0; $i < $numDig; $i++)
    {
        $digit = (int)$numStr[$i];
        $sum += pow($digit, $numDig);
    }

   
    return $sum == $num;
}


$num = 155; 
if (Armstrong($num)) 
{
    echo "$num is an Armstrong number.<br>";
} 
else
 {
    echo "$num is not an Armstrong number.<br>";
}




