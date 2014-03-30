<?php
/**
 * @file
 * Primary pre/preprocess functions and alterations.
 */
function landkogge_preprocess_html(&$vars) {
  foreach($vars['user']->roles as $role){
    $vars['classes_array'][] = 'role-' . drupal_html_class($role);
  }
}