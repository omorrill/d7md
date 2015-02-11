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
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['gender'] = array(
    'title' => t('Gender'),
    'help' => t('The gender of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_in_operator',
      'options callback' => 'hamster_views_gender_options',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('The weight of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['birthdate'] = array(
    'title' => t('Birth Day'),
    'help' => t('The birthdate of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
  );
  
  $data['hamster']['image'] = array(
    'title' => t('Image'),
    'help' => t('The image file of the hamster.'),
    'field' => array(
      'handler' => 'hamster_views_handler_field_image',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter',
    ),
  );
  
  $data['hamster']['habitat_id'] = array(
    'title' => t('Habitat'),
    'help' => t('The habitat of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'relationship' => array(
      'label' => t('Habitat'),
      'base' => 'hamster_habitat',
      'base field' => 'id',
    ),
  );
  
  $data['hamster_habitat']['table'] = array(
    'group' => t('Hamster Habitat'),
    'title' => t('Hamster Habitat Information'),
    'help' => t('List information about hamster habitats.'),
  );
  
  $data['hamster_habitat']['id'] = array(
    'title' => t('ID'),
    'help' => t('The ID of the hamster habitat.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster_habitat']['name'] = array(
    'title' => t('Habitat Name'),
    'help' => t('The name of the hamster habitat.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster_habitat']['capacity'] = array(
    'title' => t('Capacity'),
    'help' => t('The capacity of the hamster habitat.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  return $data;
}

function hamster_views_gender_options() {
  return array(
    'male' => t('Male'),
    'female' => t('Female'),
  );
}