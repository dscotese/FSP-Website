<?php
$view = new view;
$view->name = 'fsp_chart_weekly_sixmonth_avg';
$view->description = 'Chart of weekly six month averages';
$view->tag = 'chart';
$view->view_php = '';
$view->base_table = 'users';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'created' => array(
    'label' => 'Week',
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
    'custom_date_format' => 'Y-W',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'users',
    'field' => 'created',
    'relationship' => 'none',
  ),
  'uid' => array(
    'label' => 'Count',
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
    'link_to_user' => 0,
    'exclude' => 0,
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'views_sql_groupedfields' => array(
    'label' => 'Group By Fields',
    'alter' => array(
      'alter_text' => FALSE,
      'text' => '',
      'make_link' => FALSE,
      'path' => '',
      'alt' => '',
      'link_class' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => FALSE,
      'max_length' => '',
      'word_boundary' => TRUE,
      'ellipsis' => TRUE,
      'strip_tags' => FALSE,
      'html' => FALSE,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => '1',
    'id' => 'views_sql_groupedfields',
    'table' => 'views_groupby',
    'field' => 'views_sql_groupedfields',
    'relationship' => 'none',
    'views_groupby_fields_to_group' => array(
      'created' => 'created',
    ),
    'views_groupby_sql_function' => 'count',
    'views_groupby_fields_to_aggregate' => array(
      'uid' => 'uid',
    ),
    'views_groupby_field_sortby' => 'created',
    'views_groupby_sortby_direction' => 'desc',
  ),
));
$handler->override_option('filters', array(
  'rid' => array(
    'operator' => 'and',
    'value' => array(
      '16' => '16',
      '30' => '30',
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
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Six month avg.');
$handler->override_option('use_ajax', TRUE);
$handler->override_option('items_per_page', 20);
$handler->override_option('offset', 1);
$handler->override_option('style_plugin', 'list');
$handler->override_option('style_options', array(
  'grouping' => '',
  'type' => 'ul',
));
$handler->override_option('row_options', array(
  'inline' => array(
    'field_fsp_state_value' => 'field_fsp_state_value',
    'uid' => 'uid',
    'views_sql_groupedfields' => 'views_sql_groupedfields',
  ),
  'separator' => '',
  'hide_empty' => 1,
));
$handler = $view->new_display('page', 'Six month avg', 'page_1');
$handler->override_option('style_plugin', 'charts');
$handler->override_option('style_options', array(
  'views_charts_series_fields' => array(
    'uid' => 'uid',
  ),
  'views_charts_x_labels' => 'field_fsp_country_value',
  'width' => '730',
  'height' => '500',
  'engine' => 'open-flash',
  'type' => array(
    'open-flash' => 'pie',
  ),
  'wmode' => 'opaque',
  'y_min' => '0',
  'y_legend' => 'Participants',
));
$handler->override_option('path', 'about/charts/country');
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