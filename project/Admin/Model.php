<?php
class Model
{
    public $conn;
    function __construct()
    {
        $conn=new mysqli('localhost',"root","",'Jewellery'); 
    } 
}
?>