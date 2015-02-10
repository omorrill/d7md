<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function hamster_views_data() {
  $data = array();
  
  $data['hamster']['table'] = array(
    'group' => t('Hamster'),
    'title' => t('Hamster Information'),
    'help' => t('List information about hamsters.'),
  );
  
  $data['hamster']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Hamsters'),
    'help' => t('Information about hamsters.'),
  );
  
  $data['hamster']['id'] = array(
    'title' => t('ID'),
    'help' => t('The ID of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
  );
  
  $data['hamster']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['gender'] = array(
    'title' => t('Gender'),
    'help' => t('The gender of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('The weight of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
  );
  
  $data['hamster']['birthdate'] = array(
    'title' => t('Birth Day'),
    'help' => t('The birthdate of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['image'] = array(
    'title' => t('Image'),
    'help' => t('The image file of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['habitat_id'] = array(
    'title' => t('Habitat'),
    'help' => t('The habitat of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  return $data;
}