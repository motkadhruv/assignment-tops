<?php 
include 'Model.php';
class control extends model
{
    function __construct()
    {
        session_start();
        model::__construct();
        $url = $_SERVER['PATH_INFO'];
        $cate_arr = $this->select('category');
        switch($url)
        {
            case "/index": 
                include 'index.php';
            break;
            case "/register": 
                if(isset($_POST['submit']))
                {
                    $uname=$_POST['name'];
                    $uemail=$_POST['email'];
                    $upwd=$_POST['psw'];
                    $umbl=$_POST['mobile'];
                    $ugender=$_POST['gender'];
                    $ulang=$_POST['chk'];
                    $uadd=$_POST['address'];
                    $data=array('u_name'=>$uname,'u_email'=>$uemail,'u_password'=>$upwd,'mobile'=>$umbl,'gender'=>$ugender,'language'=>$ulang,'address'=>$uadd);
                    $this->insert('user',$data);
                }
                include 'register.php';
            break;
            case "/login": 
                if(isset($_POST['submit']))
                {
                    $uemail=$_POST['email'];
                    $upwd=$_POST['psw'];
                    
                if(isset($_POST['remember']))
                {
                    setcookie('uemail',$uemail,time()+10);
                    setcookie('upwd',$upwd,time()+10);
                }
                    $where=array('u_email'=>$uemail,'u_password'=>$upwd);
                    $run=$this->select_where('user',$where);
                    $fetch=$run->fetch_object();
                    $dbemail = $fetch->u_email;
                    $dbpwd = $fetch->u_password;
                    $dbuid=$fetch->u_id;
                    $_SESSION['userEmail']=$dbemail;
                    $_SESSION['uId']=$dbuid;
                    if($uemail==$dbemail && $upwd==$dbpwd)
                    {
                        echo "<script> alert('Welcome User...!'); window.location.href='index' </script>";
                    }
                }
                include 'login.php';
            break;
            case "/logout":
                unset($_SESSION['userEmail']);
                unset($_SESSION['uId']);
                echo "<script> 
                alert('Logout Success...!'); 
                window.location.href='login'; 
                </script>";
            break;
            case "/about": 
                include 'about.php';
            break;
            case "/cart":
                $uid = $_SESSION['uId'];
                $where=array('u_id'=>$uid);
                $cart_arr=$this->select_join_where_multidata('cart','products',"cart.prd_id = products.prd_id",$where);
                include 'cart.php';
            break;
            case "/addtocart": 
                if(isset($_SESSION['uId']))
            {
                if(isset($_REQUEST['prd-id']))
                {
                    if(isset($_REQUEST['add']))
                    {
                    $prd_id = $_REQUEST['prd_id'];
                    $uid = $_SESSION['uId'];
                    $qty = $_REQUEST['qty'];
                    $where=["prd_id"=>$prd_id,"u_id"=>$uid];
                    $run = $this->select_where('cart', $where);
                    $fetch = $run->fetch_object();
                    $qtyDB = $fetch->quantity;
                if(!empty($fetch))
                {
                    $totalQty = $qty + $qtyDB;
                    $data = ['quantity'=>$totalQty];
                    $run = $this->update('cart', $data, $where);
                    if($run)
                    {
                        echo "<script>
                        alert('Cart Updated..!');
                        window.location.herf='cart'
                        </script>";
                    }
                }
                else
                {
                    $data=array("prd_id"=>$prd_id,"quantity"=>$qty,'u_id'=>$uid);
                    $run=$this->insert('cart', $data);
                    if($run)
                            {
                                echo "<script>
                                alert('Added To Cart...!');
                                window.location.herf='cart'
                                </script>";
                            }
                }}
            }
            } 
                include 'cart.php';
            break;
            case "/checkout":
                if(isset($_REQUEST['checkout']))
                {
                    if(isset($_REQUEST['submit']))
                    {
                        $totalcart=$_REQUEST['checkout'];
                    }
                }
                include 'checkout.php';
            break;
            case "/products":
                if(isset($_REQUEST['cate_id']))
                {
                    $cate_id=$_REQUEST['cate_id'];
                    $where=array('cate_id'=>$cate_id);
                    $prd_arr=$this->select_where_multidata('products',$where);
                }
                include 'product.php';
            break;
            case "/jewellery": 
                include 'jewellery.php';
            break;
            case "/contact": 
                include 'contact.php';
            break;
            case "/thankyou":
                include 'thankyou.php';
            break;
            default : 
                include('404.php');
        }
    }
}
$obj=new control();
?>