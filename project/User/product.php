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
</head>

<body class="sub_page">

  <div class="hero_area">
    <!-- header section strats -->
    <?php include('header.php'); ?>
    <!-- end header section -->
  </div>
  <!-- price section -->
  <section class="price_section ">
    <div class="container">     
      <?php
   foreach($prd_arr as $prd){?>
      <div class="price_container">
        <div class="box">
          <div class="img-box"  >
            <img src="images/<?php echo $prd->prd_img; ?>" alt="">
          </div>
          <div class="name">
            <h6>
    <?php echo $prd->prd_name; ?>
            </h6>
          </div>
          <div class="detail-box">
            <h5><?php echo $prd->prd_price; ?>
            </h5>
    <form action="addtocart?prd-id" method="post"> 
              <input type="hidden" name="prd_id" value=" <?php echo $prd->prd_id; ?>">
              <p class="fw-bold">
           Quantity: <input type="number" name="qty" value="1" min="1" max="5" class="border-none border text-center">
              </p>
           <button type="submit" name="add">+</button>
           </form>
          </div>
        </div>
      </div>
    </div>
    <?php }?>
    </div>
  </section>
  <!-- end price section -->

  <!-- info section -->

  <!-- end info_section -->

  <!-- footer section -->
  <?php include('footer.php'); ?>
  <!-- footer section -->

  <script type="text/javascript" src="js/jquery-3.4.1.min.js"></script>
  <script type="text/javascript" src="js/bootstrap.js"></script>
  <script type="text/javascript" src="js/custom.js"></script>
</body>

</html>