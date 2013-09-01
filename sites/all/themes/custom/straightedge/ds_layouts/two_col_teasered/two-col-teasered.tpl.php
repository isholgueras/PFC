<div class="<?php print $classes;?> two-col-teasered-wrapper clearfix">

  <?php if ($top): ?>
    <div class="ds-top<?php print $top_classes; ?>">
      <?php print $top; ?>
    </div>
  <?php endif; ?>

  <div class="two-col-teasered-content">
    <div class="ds-left<?php print $left_classes; ?>">
      <?php print $left; ?>
    </div>
    <div class="ds-right<?php print $right_classes; ?>">
      <?php print $right; ?>
    </div>
  </div>
</div>
  <?php if ($bottom): ?>
    <div class="ds-bottom<?php print $bottom_classes; ?>">
      <?php print $bottom; ?>
    </div>
  <?php endif; ?>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>