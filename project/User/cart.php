<!DOCTYPE html>
<html>

<head>
  <!-- Basic -->
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <!-- Mobile Metas -->
  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
  <!-- Site Metas -->
  <meta name="keywords" content="" />
  <meta name="description" content="" />
  <meta name="author" content="" />

  <title>Jewellery</title>

  <!-- slider stylesheet -->
  <link rel="stylesheet" type="text/css" href="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.1.3/assets/owl.carousel.min.css" />

  <!-- bootstrap core css -->
  <link rel="stylesheet" type="text/css" href="css/bootstrap.css" />

  <!-- fonts style -->
  <link href="https://fonts.googleapis.com/css?family=Baloo+Chettan|Poppins:400,600,700&display=swap" rel="stylesheet">
  <!-- Custom styles for this template -->
  <link href="css/style.css" rel="stylesheet" />
  <!-- responsive style -->
  <link href="css/responsive.css" rel="stylesheet" />
  <style>@media (min-width: 1025px) {
.h-custom {
height: 100vh !important;
}
}</style>
</head>

<body class="sub_page">

  <div class="hero_area">
    <!-- header section strats -->
    <?php include('header.php'); ?>
    <!-- end header section -->
  </div>

  <!-- info section -->
  <div class="container">
    <div class="row justify-content-center">
      <div class="col-lg-10">
        <div class="table-responsive mt-2">
          <table class="table table-bordered table-striped text-center">
            <thead>
              <tr>
                <td colspan="7">
                  <h4 class="text-center text-info m-0">Products in your cart!</h4>
                </td>
              </tr>
              <tr>
                <th>ID</th>
                <th>Image</th>
                <th>Product</th>
                <th>Price</th>
                <th>Quantity</th>
                <th>Total Price</th>
                
              </tr>
            </thead>
            <tbody>
              <tr>
                <?php if(!empty($cart_arr))
                {
                  foreach($cart_arr as $cart)
                  { ?>
                <td><input type="number" class="pid" value="<?php echo $cart->prd_id; ?>"></td>
                <td><img src="images/<?php echo $cart->prd_img; ?>" width="50"></td>
                <td>
                  <i class="fas fa-rupee-sign"><?php echo $cart->prd_name; ?></i>
                </td>
                <td><input type="name" class="pprice" value="<?php echo $cart->prd_price; ?>"></td>
                <td>
                  <input type="number" class="form-control itemQty" value="<?php echo $cart->quantity; ?>" style="width:75px;">
                </td>
                <td><i class="fas fa-rupee-sign"><?php
                $price = $cart->prd_price;
                $qty = $cart->quantity;
                $subTotal = $price*$qty;
                echo $subTotal;
                $total[] = $subTotal;
                ?></i></td>
              </tr><?php } ?>
              <tr>
                <td colspan="3"><b>Grand Total</b></td>
                <td><b><i class="fas fa-rupee-sign"><?php 
                    echo array_sum($total);
                  ?></i></b></td>
                <td colspan="2">
                 
                  <form action="checkout?totalCartValue" method="post">
                    <input type="hidden" name="checkout" value="<?php echo array_sum($total); ?>">
                    <input type="submit" name="submit" value="Checkout">
                  </form>
                </td>
              </tr>
           <?php }?>
            </tbody>
          </table>
        </div>
      </div>
    </div>
  </div>

  <!-- end info_section -->

  <!-- footer section -->
  <?php include('footer.php'); ?>
  <!-- footer section -->

  <script type="text/javascript" src="js/jquery-3.4.1.min.js"></script>
  <script type="text/javascript" src="js/bootstrap.js"></script>
  <script type="text/javascript" src="js/custom.js"></script>

</body>
</html>