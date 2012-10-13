<?php

function materialordering_settings_form($form, &$form_state) {
  
  $form = array();

  $form['emails'] = array(
    '#type' => 'fieldset',
    '#title' => t('Email settings'),
    '#collapsible' => TRUE,
  );

  $form['emails']['materialordering_emails_to'] = array(
    '#type' => 'textarea',
    '#title' => t("Email addresses for receiving orders"),
    '#description' => t("These addresses are added to email's TO field. Separate addresses with new lines."),
    '#default_value' => variable_get('materialordering_emails_to'),
  );
  
  $form['emails']['materialordering_emails_cc'] = array(
    '#type' => 'textarea',
    '#title' => t("Email addresses for receiving orders as CC"),
    '#description' => t("These addresses are added to email's CC field. Separate addresses with new lines."),
    '#default_value' => variable_get('materialordering_emails_cc'),
  );

  return system_settings_form($form);
}