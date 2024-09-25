<!-- Declare a Multi Dimensioned array of floats called balances having Three rows and five columns -->

<?php

$array= [
    [100.29, 280.75, 497.10, 763.25, 412.55], 
    [324.30, 742.45, 165.60, 9874.15, 889.80],
    [7890.90, 7310.20, 764.35, 120.50, 350.65] 
];


echo "Balance at row 2, column 4: " . $array[1][3].'<br>';
echo "Balance at row 2, column 4: " . $array[0][0].'<br>';
echo "Balance at row 2, column 4: " . $array[2][2].'<br>';
echo "Balance at row 2, column 4: " . $array[0][2].'<br>';
echo "Balance at row 2, column 4: " . $array[1][4].'<br>';
?>
