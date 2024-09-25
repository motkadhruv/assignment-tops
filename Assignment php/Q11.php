<!-- Get random values from array -->

<?php

$array = array(10, 20, 30, 40, 50, 60, 70, 80, 90);


$random = array_rand($array);
echo "Random value from the array: " . $array[$random] . "<br>";


$randoms = array_rand($array, 3);
echo "Three random values from the array: ";
foreach ($randoms as $key) 
{
    echo $array[$key] . " ";
}
?>
