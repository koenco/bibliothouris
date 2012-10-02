<?php
/**
 * @file
 * bibliothouris_clientside_validation.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function bibliothouris_clientside_validation_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'only_numeric_values';
  $rule->name = 'only_numeric_values';
  $rule->field_name = 'field_isbn';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'book';
  $rule->validator = 'field_validation_numeric2_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '',
    'errors' => 0,
  );
  $rule->error_message = 'An isbn can only contain numbers!';
  $export['only_numeric_values'] = $rule;

  return $export;
}
