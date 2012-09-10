<?php
/**
 * @file
 * hr_documents_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_documents_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-document-field_clusters'])) {
    $data['node-document-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_documents_sectors_views_default_views_alter(&$data) {
  if (isset($data['documents'])) {
    $data['documents']->display['dashboard']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['default']->display_options['fields']['field_clusters']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['default']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['featured']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['key']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['policy']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['press']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['reports']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['documents']->display['training']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
  }
}
