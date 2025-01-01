<?php 
include 'Model.php';
class control extends Model
{
    function __construct()
    {
        Model::__construct();
        $url = $_SERVER['PATH_INFO'];
        switch($url)
        {
            case "/index": 
                include 'index.php';
            break;
            case "/AddUser": 
                include 'AddUser.php';
            break;
            case "/ManageCategories": 
                include 'ManageCategories.php';
            break;
            case "/ManageProducts": 
                include 'ManageProducts.php';
            break;
            case "/ManageSubCategories": 
                include 'ManageSubCategories.php';
            break;
            case "/ManageUsers": 
                include 'ManageUsers.php';
            break;
            case "/SubCategories": 
                include 'SubCategories.php';
            break;
            default : 
                include '404.php';
        }
    }
}
$obj=new control();
?>