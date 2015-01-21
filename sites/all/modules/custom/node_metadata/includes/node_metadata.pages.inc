<?php
/**
 * Content of tab
 * Implements hook_page for metadata content.
 */
function node_metadata_page($node) {
  $output = '';
  
  $output .= '<div><label>Author:</label> ' . $node->name . '</div>';
  $output .= '<div><label>Created Date:</label> ' . format_date($node->created) . '</div>';
  $output .= '<div><label>Updated:</label> ' . format_date($node->changed) . '</div>';
  $output .= '<div><label>Comment Count:</label> ' . $node->comment_count . '</div>';
  
  return $output; 
}