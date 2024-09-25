<!-- Write a PHP program to enter marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer, calculate percentage and grade by if
else write a PHP program for find „Thursday‟ in week using switch
Function. -->


<!-- ...........................................calculater.................................. -->
<?php

function calculate($marks) {
   
    $totalMarks = array_sum($marks);
    $numSubjects = count($marks);
    
   
    $percentage = ($totalMarks / ($numSubjects * 100)) * 100;

   
    if ($percentage >= 90) 
    {
        $grade = 'A+';
    } 
    elseif ($percentage >= 80) 
    {
        $grade = 'A';
    } 
    lseif ($percentage >= 70) 
    {
        $grade = 'B';
    } 
    elseif ($percentage >= 60) 
    {
        $grade = 'C';
    } 
    elseif ($percentage >= 50)
    {
        $grade = 'D';
    } 
    else 
    {
        $grade = 'F';
    }

    return [$percentage, $grade];
}


$marks = [
    'Physics' => 85,
    'Chemistry' => 78,
    'Biology' => 92,
    'Mathematics' => 65,
    'Computer' => 88
];


list($percentage, $grade) = calculate($marks);


echo "Total Marks: " . array_sum($marks) . "<br>";
echo "Percentage: " . $percentage . "<br>";
echo "Grade: " . $grade . "<br>";


// ..........................................week name....................................


function Day($Number) {
    switch ($Number) 
    {
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday"; 
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return "Invalid day number. Please enter a number between 1 and 7.";
    }
}


$Number = 4; 
$day = Day($Number);
echo "The number $Number is: $day .'<br>'.";
?>

