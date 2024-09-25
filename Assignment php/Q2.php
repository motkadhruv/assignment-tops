<!-- Write a PHP program to check Leap years between 1901 to 2016 Using nested if. -->

<?php

function LeapYear($year) 
{
   
    if ($year % 4 == 0) 
    {
        if ($year % 100 == 0) 
        {
            if ($year % 400 == 0)
            {
                return true; 
            } 
            else 
            {
                return false;
            }
        } 
        else 
        {
            return true; 
        }
    } 
    else
    {
        return false; 
    }
}


echo "Leap Years between 1901 and 2016:.'<br>'.";
for ($year = 1901; $year <= 2016; $year++) 
{
    if (LeapYear($year)) 
    {
        echo $year . "<br>";
    }
}
?>


