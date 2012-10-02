<?php
/**
 * @file
 * bibliothouris_clientside_validation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibliothouris_clientside_validation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
