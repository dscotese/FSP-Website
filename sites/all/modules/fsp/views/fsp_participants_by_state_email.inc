<?php
$view = new view;
$view->name = 'fsp_participants_by_state_email';
$view->description = 'Email participants willing to be contacted by state';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
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
    'label_type' => 'widget',
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
    'relationship' => 'none',
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
      'trim' => 1,
      'max_length' => '30',
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
    'relationship' => 'none',
  ),
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
      'max_length' => '40',
      'word_boundary' => 0,
      'ellipsis' => 1,
      'strip_tags' => 1,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => '0',
    'exclude' => 0,
    'id' => 'mail',
    'table' => 'users',
    'field' => 'mail',
    'relationship' => 'none',
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
    'exclude' => 1,
    'id' => 'field_fsp_state_value',
    'table' => 'node_data_field_fsp_state',
    'field' => 'field_fsp_state_value',
    'relationship' => 'none',
  ),
));
$handler->override_option('sorts', array(
  'field_fsp_state_value' => array(
    'order' => 'ASC',
    'delta' => -1,
    'id' => 'field_fsp_state_value',
    'table' => 'node_data_field_fsp_state',
    'field' => 'field_fsp_state_value',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'field_fsp_state_value' => array(
    'default_action' => 'summary asc',
    'style_plugin' => 'default_summary',
    'style_options' => array(
      'count' => 1,
      'override' => 0,
      'items_per_page' => '25',
    ),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => 'List of FSP participants willing to be contacted in %1',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'add_table' => 1,
    'require_value' => 0,
    'reduce_duplicates' => 0,
    'id' => 'field_fsp_state_value',
    'table' => 'node_data_field_fsp_state',
    'field' => 'field_fsp_state_value',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '3' => 0,
      '16' => 0,
      '29' => 0,
      '28' => 0,
      '23' => 0,
      '25' => 0,
      '24' => 0,
      '20' => 0,
      '13' => 0,
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'default_argument_image_size' => '_original',
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'blog' => 0,
      'poll' => 0,
      'image' => 0,
      'product' => 0,
      'nhlf' => 0,
      'product_kit' => 0,
      'forum' => 0,
      'book' => 0,
      'ext_event' => 0,
      'news_item' => 0,
      'page' => 0,
      'profile' => 0,
      'story' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '12' => 0,
      '4' => 0,
      '14' => 0,
      '6' => 0,
      '3' => 0,
      '8' => 0,
      '10' => 0,
      '7' => 0,
      '2' => 0,
      '5' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'image_size' => array(
      '_original' => '_original',
      'thumbnail' => 'thumbnail',
      'preview' => 'preview',
      '240' => '240',
      '150' => '150',
      '400' => '400',
    ),
    'validate_argument_signup_status' => 'any',
    'validate_argument_signup_node_access' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'rid' => array(
    'operator' => 'or',
    'value' => array(
      '16' => '16',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'rid',
    'table' => 'users_roles',
    'field' => 'rid',
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'field_fsp_country_value' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 1,
      'operator' => 'country-op',
      'identifier' => 'country',
      'label' => 'Country',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_fsp_country_value',
    'table' => 'node_data_field_fsp_country',
    'field' => 'field_fsp_country_value',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'field_fsp_state_value' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 1,
      'operator' => 'state-op',
      'identifier' => 'state',
      'label' => 'State',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'field_fsp_state_value',
    'table' => 'node_data_field_fsp_state',
    'field' => 'field_fsp_state_value',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'rid_1' => array(
    'operator' => 'or',
    'value' => array(
      '30' => '30',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'rid_1',
    'table' => 'users_roles',
    'field' => 'rid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
    'reduce_duplicates' => 0,
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
$handler->override_option('title', 'FSP Participants by State');
$handler->override_option('use_ajax', TRUE);
$handler->override_option('items_per_page', 50);
$handler->override_option('use_pager', '1');
$handler->override_option('distinct', 1);
$handler->override_option('style_plugin', 'bulk');
$handler->override_option('style_options', array(
  'grouping' => 'field_fsp_state_value',
  'override' => 1,
  'sticky' => 0,
  'order' => 'asc',
  'columns' => array(
    'field_fsp_city_value' => 'field_fsp_city_value',
    'field_fsp_first_name_value' => 'field_fsp_first_name_value',
    'field_fsp_last_name_value' => 'field_fsp_last_name_value',
    'mail' => 'mail',
    'field_fsp_state_value' => 'field_fsp_state_value',
  ),
  'info' => array(
    'field_fsp_city_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_fsp_first_name_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_fsp_last_name_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_fsp_state_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  ),
  'default' => '-1',
  'execution_type' => '2',
  'display_type' => '0',
  'hide_select_all' => 0,
  'skip_confirmation' => 0,
  'display_result' => 1,
  'merge_single_action' => 1,
  'selected_operations' => array(
    'token_actions_send_email_action' => 'token_actions_send_email_action',
    'node_assign_owner_action' => 0,
    'views_bulk_operations_delete_node_action' => 0,
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
    'revision_moderation_disable_action' => 0,
    'system_message_action' => 0,
    'token_actions_message_action' => 0,
    'revision_moderation_enable_action' => 0,
    'views_bulk_operations_ruleset_action_rules_set_1' => 0,
    'views_bulk_operations_script_action' => 0,
    'node_make_sticky_action' => 0,
    'node_make_unsticky_action' => 0,
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
    'views_bulk_operations_fields_action' => 0,
    'views_bulk_operations_taxonomy_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'node_promote_action' => 0,
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
    'node_publish_action' => 0,
    'image_operations_rebuild' => 0,
    'token_actions_goto_action' => 0,
    'system_goto_action' => 0,
    'node_unpromote_action' => 0,
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
    'node_save_action' => 0,
    'system_send_email_action' => 0,
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
    'node_unpublish_action' => 0,
    'node_unpublish_by_keyword_action' => 0,
    'auto_nodetitle_operations_update' => 0,
    'pathauto_node_operations_update' => 0,
  ),
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'admin/participants/state_email');
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
