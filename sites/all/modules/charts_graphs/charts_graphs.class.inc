<?php
// $Id: charts_graphs.class.inc,v 1.1.2.5 2010/06/28 01:46:16 rsevero Exp $

/**
 * @file
 *   abstract class ChartCanvas.
 *
 */

/**
 * Each graphing library implementation should create a derivative of this
 * class.
 */
abstract class ChartCanvas {

  var $title;
  var $height;
  var $width;
  var $type;

  /**
   * Text presented next to the left Y axis.
   *
   * @var <string>
   */
  var $y_legend;

  /**
   * Identifies each value in a data series. The same identification is used for
   * all data series.
   *
   * @var <array>
   */
  var $x_labels;

  /**
   * For flash charts only
   * Possible values are "window", "opaque" and "transparent"
   */
  var $wmode;

  /**
   * An array of series of values. Each element in a series (which is also an
   * array in itself) is a numeric value of "measurement".
   *
   * <p>e.g.:
   * <pre>
   *  $canvas->series = array(
   *    'Some Value' => array(9,6,7,9,5,7,6,9,7),
   *    'Page Views' => array(6,7,9,5,7,6,9,7,3),
   *  );
   * </pre>
   */
  var $series;

  // Should Not set those from client code, only from an implementation.
  protected $modulename;

  //The name of the implementing module.
  protected $unique_id;

  function getModuleName() {
    return $this->modulename;
  }

  function getUnique_ID() {
    return $this->unique_id;
  }

  function get_wmode() {
    $wmodes = self::wmode_values();
    $default = 'window';
    $wmode = strtolower(!empty($this->wmode) ? $this->wmode : $default);
    return isset($wmodes[$wmode]) ? $wmode : $default;
  }

  /**
   * Function that renders data.
   */
  abstract function get_chart();

  /*
   * Function that preprocesses generalized data structure and saves it in the
   * form suitable for specific charting implementation.
   *
   * @param $rows an array of arrays of data in the following format:
   * <pre>
   *  array(
   *    'Some Value' => array(9,6,7,9,5,7,6,9,7),
   *    'Page Views' => array(6,7,9,5,7,6,9,7,3),
   * );
   *
   * @param $x_labels an array of x-axis labels
   */
  abstract function set_data($rows, $x_labels);

  /**
   * Constructor function.
   *
   * <p>ATTENTION: This function should NOT be called directly.
   * You should always instantiate a chart implementation
   * class using chart_graphs_get_graph() factory function.
   *
   * <p>CAUTION: PHP does not implicitely call parent constructors. DO NOT
   * override this function, or if you do: make sure to call it from the
   * child implementation with: parent::__contrusct();
   * within the child constructor.
   */
  function __construct($modulename) {
    $this->modulename = $modulename;
    $this->unique_id = chart_graphs_chart_id_generator();

    // Set some default values
    $this->width = 500;
    $this->height = 250;
    $this->title = t("A Drupal Chart");
  }

  static function series_colors() {
    return array(
      '0000FF',
      'FF0000',
      'FFFF00',
      '87907D',
      '21B6A8',
      '177F75',
      'B6212D',
      '7F171F',
      'B67721',
      '7F5417',
      'FF8000',
      'FFC080',
      'FFDFBF',
      'FFC080',
      'FFCC00',
      'FFE500',
      'FFF9BF',
      '78C0E9',
      '179CE8',
      '30769E',
      'C8E9FC',
      'ECF8FF',
      '00CCFF',
      '4086AA',
      '91C3DC',
    );
  }

  static function wmode_values() {
    return array(
      'window' => 'Window (Default)',
      'opaque' => 'Opaque',
      'transparent' => 'Transparent'
    );
  }
}