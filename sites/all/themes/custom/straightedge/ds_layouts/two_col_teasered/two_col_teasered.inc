<?php
function ds_two_col_teasered() {
  return array(
    'label' => t('Two columns for teaser'),
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
    // Add this line if there is a default css file.
    'css' => FALSE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => FALSE,
  );
}