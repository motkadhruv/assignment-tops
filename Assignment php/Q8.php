<!-- How can you tell if a number is even or odd without using any Condition or loop? -->

<?php

function EvenOddnumber($num) 
{
    echo ($num % 2 === 0) ? "Even" : "Odd";
}


$num = 10;
EvenOddnumber($num);
?>

