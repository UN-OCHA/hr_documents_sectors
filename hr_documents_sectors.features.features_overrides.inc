<?php
/**
 * @file
 * hr_documents_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_documents_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-document-field_clusters.field_instance|label"] = 'Sectors';

  // Exported overrides for: views_view
  $overrides["views_view.documents.display|dashboard|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|default|display_options|fields|field_clusters|label"] = 'Sector';
  $overrides["views_view.documents.display|default|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|featured|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|key|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|policy|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|press|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|reports|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';
  $overrides["views_view.documents.display|training|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';

 return $overrides;
}
