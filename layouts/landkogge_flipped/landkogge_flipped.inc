<?php
// Plugin definition
$plugin = array(
  'title' => t('Landkogge Flipped'),
  'icon' => 'landkogge_flipped.png',
  'category' => t('Panopoly'),
  'theme' => 'landkogge_flipped',
  'css' => 'landkogge_flipped.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
    'footer' => t('Footer'),
  ),
);
