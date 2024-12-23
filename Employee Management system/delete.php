<?php
include 'config.php';

$id = $_GET['id'];

try {
    $stmt = $pdo->prepare("DELETE FROM employee WHERE id = ?");
    $stmt->execute([$id]);
    header("Location: view.php");
} catch (PDOException $e) {
    echo "Error: " . $e->getMessage();
}
?>
