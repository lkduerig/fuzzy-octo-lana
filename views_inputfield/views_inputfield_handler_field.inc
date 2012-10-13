<?php

class views_inputfield_handler_field extends views_handler_field {

  function init(&$view, &$options) {
    parent::init($view, $options);
  }
  
  function option_definition() {
    $options = parent::option_definition();

    $options['inputfield'] = array(
      'contains' => array(
        //'id'
        //'type'
        'title' => array('default' => ''),
        'size' => array('default' => 60),
        'maxlength' => array('default' => 128),
        //'name' => array('default' => ''),
        'default_value' => array('default' => ''),
        'description' => array('default' => ''),
        'class' => array('default' => ''),
      ),
    );
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    
    $form['inputfield'] = array(
      '#type' => 'fieldset',
      '#title' => t('Inputfield settings'),
   //   '#description' => t('You may use token substitutions from the rewriting section in this class'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

    $form['inputfield']['title'] = array(
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#default_value' => $this->options['inputfield']['title'],
      '#description' => t(''),
    );   
    $form['inputfield']['size'] = array(
      '#type' => 'textfield',
      '#title' => t('Size'),
      '#default_value' => $this->options['inputfield']['size'],
    );
    $form['inputfield']['maxlength'] = array(
      '#type' => 'textfield',
      '#title' => t('Maxlength'),
      '#default_value' => $this->options['inputfield']['maxlength'],
    );/*
    $form['inputfield']['name'] = array(
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#default_value' => $this->options['inputfield']['name'],
      '#description' => t(''),
    );   */
    $form['inputfield']['default_value'] = array(
      '#type' => 'textfield',
      '#title' => t('Default value'),
      '#default_value' => $this->options['inputfield']['default_value'],
      '#description' => t(''),
    );
    $form['inputfield']['description'] = array(
      '#type' => 'textfield',
      '#title' => t('Description'),
      '#default_value' => $this->options['inputfield']['description'],
      '#description' => t(''),
    );
    $form['inputfield']['class'] = array(
      '#type' => 'textfield',
      '#title' => t('CSS Class'),
      '#default_value' => $this->options['inputfield']['class'],
      '#description' => t(''),
    );
  }

  function render($values) {
    return '<!--form-item-' . $this->options['id'] . '--' . $this->view->row_index . '-->';
  }

  function views_form(&$form, &$form_state) {
    // The view is empty, abort.
    if (empty($this->view->result)) {
      return;
    }

    $field_name = $this->options['id'];
    $form[$field_name] = array(
      '#tree' => TRUE,
    );
    // At this point, the query has already been run, so we can access the results
    foreach ($this->view->result as $row_id => $row) {
    
//      $entity_id = $this->get_value($row);
    
      $form[$field_name][$row_id] = array(
        '#type' => 'textfield',
        '#title' => $this->options['inputfield']['title'],
        '#size' => $this->options['inputfield']['size'],
        '#maxlength' => $this->options['inputfield']['maxlength'],
//        '#name' =>$this->options['inputfield']['title'],
        '#attributes' => array('class' => array($this->options['inputfield']['class'])),
        '#default_value' => $this->options['inputfield']['default_value'],
        '#description' => $this->options['inputfield']['description'],
      );
    }
  }
}