<!-- Write a program in PHP to print Fibonacci series. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 -->

<?php

function Fibonacci($number) {
  
    $num1 = 0;
    $num2 = 1;

    echo "Fibonacci Series: ";

    echo $num1 . ", " . $num2;

   
    for ($i = 3; $i <= $number; $i++) 
    {
        $number1 = $num1 + $num2; 
        echo ", " . $number1;

        $num1 = $num2;
        $num2 = $number1;
    }
    echo "<br>";
}


$number = 10;


Fibonacci($number);
?>

