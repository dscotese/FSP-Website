<?php
$view = new view;
$view->name = 'fsp_vbo_find_member2';
$view->description = 'For member admins to find people';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'users';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'content_profile_rel' => array(
    'label' => 'Content Profile',
    'required' => 0,
    'type' => 'rolodex',
    'id' => 'content_profile_rel',
    'table' => 'users',
    'field' => 'content_profile_rel',
    'relationship' => 'none',
  ),
));
$handler->override_option('fields', array(
  'mail' => array(
    'label' => 'E-mail',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 1,
      'max_length' => '30',
      'word_boundary' => 0,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => 'user',
    'exclude' => 0,
    'id' => 'mail',
    'table' => 'users',
    'field' => 'mail',
    'relationship' => 'none',
  ),
  'field_fsp_first_name_value' => array(
    'label' => 'First Name',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_fsp_first_name_value',
    'table' => 'node_data_field_fsp_first_name',
    'field' => 'field_fsp_first_name_value',
    'relationship' => 'content_profile_rel',
  ),
  'field_fsp_last_name_value' => array(
    'label' => 'Last Name',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_fsp_last_name_value',
    'table' => 'node_data_field_fsp_last_name',
    'field' => 'field_fsp_last_name_value',
    'relationship' => 'content_profile_rel',
  ),
  'field_fsp_city_value' => array(
    'label' => 'City',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'custom',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_fsp_city_value',
    'table' => 'node_data_field_fsp_city',
    'field' => 'field_fsp_city_value',
    'relationship' => 'content_profile_rel',
  ),
  'field_fsp_state_value' => array(
    'label' => 'State',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'custom',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_fsp_state_value',
    'table' => 'node_data_field_fsp_state',
    'field' => 'field_fsp_state_value',
    'relationship' => 'content_profile_rel',
  ),
  'field_fsp_country_value' => array(
    'label' => 'Country',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_fsp_country_value',
    'table' => 'node_data_field_fsp_country',
    'field' => 'field_fsp_country_value',
    'relationship' => 'content_profile_rel',
  ),
  'created' => array(
    'label' => 'Since',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'date_format' => 'custom',
    'custom_date_format' => 'm/y',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'users',
    'field' => 'created',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'field_fsp_referral_value' => array(
    'label' => 'Where did you hear about the FSP?',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_fsp_referral_value',
    'table' => 'node_data_field_fsp_referral',
    'field' => 'field_fsp_referral_value',
    'relationship' => 'content_profile_rel',
  ),
));
$handler->override_option('filters', array(
  'status' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'operator' => '',
      'identifier' => 'isActive',
      'label' => 'Active',
      'optional' => 0,
      'remember' => 1,
    ),
    'id' => 'status',
    'table' => 'users',
    'field' => 'status',
    'relationship' => 'none',
  ),
  'field_fsp_city_value' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'field_fsp_city_value_op',
      'identifier' => 'field_fsp_city_value',
      'label' => 'City (partials ok)',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_fsp_city_value',
    'table' => 'node_data_field_fsp_city',
    'field' => 'field_fsp_city_value',
    'relationship' => 'content_profile_rel',
  ),
  'field_fsp_state_value' => array(
    'operator' => '=',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'field_fsp_state_value_op',
      'identifier' => 'field_fsp_state_value',
      'label' => 'State (partials ok)',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 1,
    'id' => 'field_fsp_state_value',
    'table' => 'node_data_field_fsp_state',
    'field' => 'field_fsp_state_value',
    'relationship' => 'content_profile_rel',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'field_fsp_last_name_value' => array(
    'operator' => '=',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'field_fsp_last_name_value_op',
      'identifier' => 'field_fsp_last_name_value',
      'label' => 'Lastname (partials ok)',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_fsp_last_name_value',
    'table' => 'node_data_field_fsp_last_name',
    'field' => 'field_fsp_last_name_value',
    'relationship' => 'content_profile_rel',
  ),
  'field_fsp_referral_value' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'field_fsp_referral_value_op',
      'identifier' => 'field_fsp_referral_value',
      'label' => 'Content: Where did you hear about the FSP? (field_fsp_referral)',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_fsp_referral_value',
    'table' => 'node_data_field_fsp_referral',
    'field' => 'field_fsp_referral_value',
    'relationship' => 'content_profile_rel',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'field_fsp_first_name_value' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'field_fsp_first_name_value_op',
      'identifier' => 'field_fsp_first_name_value',
      'label' => 'Content: First Name (field_fsp_first_name)',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_fsp_first_name_value',
    'table' => 'node_data_field_fsp_first_name',
    'field' => 'field_fsp_first_name_value',
    'relationship' => 'content_profile_rel',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'User: Name',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'mail' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'mail_op',
      'identifier' => 'mail',
      'label' => 'User: E-mail',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 1,
    'id' => 'mail',
    'table' => 'users',
    'field' => 'mail',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'role',
  'role' => array(
    '3' => 3,
    '20' => 20,
  ),
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('items_per_page', 25);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 1,
  'order' => 'desc',
  'columns' => array(
    'mail' => 'mail',
    'field_fsp_first_name_value' => 'field_fsp_first_name_value',
    'field_fsp_last_name_value' => 'field_fsp_last_name_value',
    'field_fsp_city_value' => 'field_fsp_city_value',
    'field_fsp_state_value' => 'field_fsp_state_value',
    'field_fsp_country_value' => 'field_fsp_country_value',
    'created' => 'created',
  ),
  'info' => array(
    'mail' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_fsp_first_name_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_fsp_last_name_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_fsp_city_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_fsp_state_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_fsp_country_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  ),
  'default' => 'created',
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'admin/vbo/find_member2');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));

$views[$view->name] = $view;