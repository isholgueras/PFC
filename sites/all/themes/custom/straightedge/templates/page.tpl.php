<div id="header-wrapper">
  <div id="header" class="container">
    <div id="logo">
      <?php if (!$title): ?>
        <h1><a href="<?php print $front_page; ?>">Straightedge</a></h1>
      <?php else: /* Use h1 when the content title is empty */ ?>
        <span class="title"><a href="<?php print $front_page; ?>">Straightedge</a></span>
      <?php endif; ?>
    </div>
    <?php if ($page['header']): ?>
    <div id="menu">
        <?php print render($page['header']); ?>
        <?php if ($main_menu): ?>
          <?php
          print theme('links__system_main_menu', array(
              'links' => $main_menu,
              'attributes' => array(
                  'id' => 'main-menu-links',
                  'class' => array('links', 'clearfix'),
              ),
          ));
          ?>
      <?php endif; ?>
      </div>
    <?php endif; ?>
  </div>
</div>

<?php if ($page['slideshow']): ?>
  <div id="featured">
    <?php print render($page['slideshow']); ?>
  </div>
<?php endif; ?>

<?php if ($page['highlight']): ?>
  <div id="banner-wrapper">
    <?php print render($page['highlight']); ?>
  </div>
<?php endif; ?>

<div id="wrapper">
  <div id="page" class="container">

    <?php if ($messages): ?>
      <div id="messages"><div class="section clearfix">
          <?php print $messages; ?>
        </div></div> <!-- /.section, /#messages -->
    <?php endif; ?>

    <?php if ($title): ?>
      <h1 class="title" id="page-title">
        <?php print $title; ?>
      </h1>
    <?php endif; ?>
        
    <?php if ($page['content']): ?>
      <div id="content">
        <?php print render($page['content']); ?>
      </div>
    <?php endif; ?>

    <div id="sidebar">
      <?php if ($page['full_sidebar']): ?>
        <?php print render($page['full_sidebar']); ?>
      <?php endif; ?>

      <div id="stwo-col">
        <?php if ($page['first_sidebar'] || $page['second_sidebar']): ?>
          <div class="sbox1">
            <?php print render($page['first_sidebar']); ?>
          </div>
          <div class="sbox2">
            <?php print render($page['second_sidebar']); ?>
          </div>
        <?php endif; ?>
      </div>

    </div>
  </div>
</div>
<div id="copyright" class="container">
  <?php print render($page['footer']); ?>
  <p>Copyright (c) 2013 Sitename.com. All rights reserved. | Photos by <a href="http://fotogrph.com/">Fotogrph</a> | Design by <a href="http://www.freecsstemplates.org/" rel="nofollow">FreeCSSTemplates.org</a>.</p>
</div>