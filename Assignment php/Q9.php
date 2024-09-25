<!-- How can you declare the array (all type) in PHP? Explain with example Covert a JSON string to array. -->


<?php
// ...............................................  indexed array  ..................................
$indexedArray = array(10, 20, 30, 40, 50);


echo $indexedArray[0]."<br>"; 
echo $indexedArray[3]."<br>"; 


$indexedArray2 = [60, 70, 80];
print_r($indexedArray2)."<br>"; // Output: Array ( [0] => 60 [1] => 70 [2] => 80 )


// .........................................  associative array  .............................................
$associativeArray = array(
    "name" => "dhruv",
    "age" => 25,
    "city" => "ahemdabad"
);

echo $associativeArray["name"]."<br>";
echo $associativeArray["city"]."<br>"; 


// .....................................  multidimensional array  .............................................
$multiArray = array(
    array(1, 2, 3),
    array(4, 5, 6),
    array(7, 8, 9)
);


echo $multiArray[0][1]."<br>"; 
echo $multiArray[2][2]."<br>"; 


// ...............................  JSON string  ..................................

$String = '{"name": "dhruv", "age": 25, "city": "vadodara"}';

$array = json_decode($String, true);
print_r($array)."<br>";


?>







