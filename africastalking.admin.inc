<?php
/**
* Africas Talking Configuration form.
*/
function africastalking_admin_form($form){
    $form['africastalking_username']= array(
        '#type' => 'textfield',
        '#title' => t('Username'),
        '#default_value' => variable_get('africastalking_username', ''),
        '#description' => t('Your Africas Talking account username'),
        '#required' => TRUE,
    );
    $form['africastalking_api_keys']= array(
        '#type' => 'textfield',
        '#title' => t('API Key'),
        '#default_value' => variable_get('africastalking_api_key', ''),
        '#description' => t('Your Africas Talking account api key'),
        '#required' => TRUE,
    );
}
