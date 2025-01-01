<header class="header_section">
      <div class="container-fluid">
        <nav class="navbar navbar-expand-lg custom_nav-container ">
          <a class="navbar-brand" href="index.php">
            <img src="images/logo.png" alt="">
            <span>
              Jewellery
            </span>
          </a>
          <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
          </button>

          <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <div class="d-flex ml-auto flex-column flex-lg-row align-items-center">
              <ul class="navbar-nav  ">
                <li class="nav-item active">
                  <a class="nav-link" href="index">Home <span class="sr-only">(current)</span></a>
                </li>
                <li class="nav-item">
                  <a class="nav-link" href="about"> About</a>
                </li> <li class="nav-item">
                  <a class="nav-link" href="jewellery"> Jewellery</a>
                </li>
                <?php foreach($cate_arr as $cate){ ?>
                <li class="nav-item">
                  <a class="nav-link" href="products?cate_id=<?php echo $cate->cate_id?>"><?php echo $cate->cate_name ?></a>
                </li>
                <?php } ?>
                <li class="nav-item">
                  <a class="nav-link" href="contact">Contact us</a>
                </li>
                <li class="nav-item">
                  <?php if(isset($_SESSION['userEmail'])){ ?>
                    <a class="nav-link" href="logout">Logout</a><?php } else {?> 
                      <li class="nav-item">
                  <a class="nav-link" href="register">Register</a>
                </li>
                <li class="nav-item">
                  <a class="nav-link" href="login">Login</a>
                </li><?php } ?>
                </li>
              </ul>

            </div>
            <div class="quote_btn-container ">
              <a href="cart">
                <img src="images/cart.png" alt="">
                <div class="cart_number">
                  0
                </div>
              </a>
              <form class="form-inline">
                <button class="btn  my-2 my-sm-0 nav_search-btn" type="submit"></button>
              </form>
            </div>
          </div>
        </nav>
      </div>
    </header>