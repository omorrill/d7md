<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function evennodes_views_query_alter(&$view, &$query) {
  dpm($view);
  dpm($query);
  
  if ($view->base_table == 'node') {
    $query->add_where_expression(1, 'node.nid % 2 = 1');
  }
  
}

function evennodes_views_pre_render(&$view) {
  if ($view->name == 'node_list') {
    foreach ($view->result as $i => $r) {
      $view->result[$i]->node_title = 'Title: ' . $r->node_title;
    }
  }
  dpm($view->result);
}

function evennodes_views_post_render(&$view, &$output, &$cache) {
  if ($view->name == 'node_list') {
    //dpm($output);    
    //$output = '<div style="background: #ff0">' . $output . '</div>';
  }
}