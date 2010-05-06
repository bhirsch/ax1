<?php 
/**
 * @file ax1.admin.inc
 *  Admin settings form for ax1 module.
 */

/**
 * Form builder. Configure ax1 settings.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function ax1_admin_settings() {
 $form['ax1_api_key'] = array(
    '#title' => t('ax api key'),
    '#type' => 'textfield',
    '#default_value' => variable_get('ax1_api_key', NULL),
    '#description' => t('Enter this key in sites where ax2 module is installed.'),
  ); 
/*
  $form['ax1_domains'] = array(
    '#title' => t('available wildcard domains'),
   
  );
*/

  return system_settings_form($form);
}
