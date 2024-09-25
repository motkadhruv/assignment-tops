<!-- Write program to remove duplicate values from array -->

<?php

$array = array(1, 2, 3, 4, 3, 2, 5, 6, 1, 7);


echo "Original Array:<br>";
print_r($array);

$uniqueArray = array_unique($array);

echo ".<br>Array after removing duplicates:<br>";
print_r($uniqueArray);
?>
