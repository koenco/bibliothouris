<?php

/*function bibliotheme_preprocess_html(&$vars) {
  $file = theme_get_setting('theme_color') . '-style.css';
  drupal_add_css(path_to_theme() . '/css/' . $file, array(
    'group' => CSS_THEME,
    'weight' => 115,
    'browsers' => array(),
    'preprocess' => FALSE
  ));
}*/

function bibliotheme_preprocess_user_profile(&$variables) {
  $account = menu_get_object('user');

  $street = '';
  if (count($account->field_street_number) > 0) {
    $street = $account->field_street_number['und'][0]['value'];
  }
  $date_of_birth = '';
  if (count($account->field_date_of_birth) > 0) {
    $date_of_birth = date('d/m/Y', strtotime($account->field_date_of_birth['und'][0]['value']));
  }
  $city = '';
  if (count($account->field_postal_code) > 0) {
    $city = $account->field_postal_code['und'][0]['value'] . ' ';
  }
  if (count($account->field_city) > 0) {
    $city .= $account->field_city['und'][0]['value'];
  }

  $email = 'M: ' . $account->mail;

  $telephone = '';
  if (count($account->field_phone_number) > 0) {
    $telephone = 'T: ' . $account->field_phone_number['und'][0]['value'];
  } else {
    $telephone = $email;
    $email = '';
  }

  $first_name = '';
  $last_name = '';
  if (count($account->field_first_name) > 0) {
    $first_name = $account->field_first_name['und'][0]['value'];
  }
  if (count($account->field_last_name) > 0) {
    $last_name = $account->field_last_name['und'][0]['value'];
  }

  $variables['name'] = $first_name . ' ' . $last_name;
  $variables['street'] = $street;
  $variables['date_of_birth'] = $date_of_birth;
  $variables['city'] = $city;
  $variables['telephone'] = $telephone;
  $variables['email'] = $email;
  $variables['since'] = date("d/m/Y", $account->created);

}

function bibliotheme_preprocess_node(&$variables) {
  $status = $variables['content']['field_status'][0]['#markup'];
  if ($status == "Available") {
    $class = 'green';
  } else {
    $class = 'red';
  }
  $variables['content']['field_status'][0]['#markup'] = "<div class='$class'>$status</div>";

}

// change text color to red when a
function bibliotheme_preprocess_views_view_table(&$vars){
 // kpr($vars);
  if($vars['view']->name=="borrowed_books"){
    foreach($vars['rows'] as $key => $row){
      if($row['field_fine']!='€ 0'){
        $vars['row_classes'][$key][] = 'red';
      }
    }
  }
}

// remove the title from the /user page
function bibliotheme_preprocess_page(&$variables) {
  $path = base_path() . 'user/';
  if (strpos(drupal_get_path_alias(request_uri()), $path) > -1) {
    drupal_set_title('');
  }

}