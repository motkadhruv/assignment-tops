<!-- Write a PHP script which decodes the following JSON string. -->

<?php

$json = '{
    "name": "dhruv",
    "age": 30,
    "city": "ahemdabad"
}';

$decodedData = json_decode($json, true);

if (json_last_error() === JSON_ERROR_NONE) 
{
    echo "Name: " . $decodedData['name'] . "<br>";
    echo "Age: " . $decodedData['age'] . "<br>";
    echo "City: " . $decodedData['city'] . "<br>";
} else {
    echo "Invalid JSON: " . json_last_error_msg();
}
?>
