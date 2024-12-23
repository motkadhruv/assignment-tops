<?php
// Database connection
$host = 'localhost';
$db_name = 'employee_management';
$username = 'root';
$password = '';
$port = '3307';

try {
    $pdo = new PDO("mysql:host=$host;port=3307;dbname=$db_name", $username, $password);

    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
    die("Database connection failed: " . $e->getMessage());
}
?>
