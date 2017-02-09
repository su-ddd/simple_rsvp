<?php


/**
 * Implements hook_views_data().
 */
function simple_rsvp_views_data() {
	$data = array(
		'simple_rsvp_options' => array(
			'table' => array(
				'group' => t('RSVP'),
			),
  			'id' => array(
  			),
  			'name' => array(
			),
      	),
      	'simple_rsvp_rsvps' => array(
      		'table' => array(
      			'group' => t('RSVP'),
      			'base'  => array(
      				'field' => 'id',
      				'title' => t('RSVPs Submitted'),
      			),
      			'join' => array(
      				'users' => array(
      					'left_field' => 'uid',
      					'field' => 'uid',
      				),
      			),
      		),
      		'id' => array(
      			'title' => t('ID'),
      			'help'  => t('The ID of the RSVP Response'),
      			'field' => array(
    				'handler' => 'views_handler_field',
    				'click sortable' => TRUE,
    			),
      		),
      		'oid' => array(
      			'title' => t('RSVP'),
      			'help'  => t('The option selected'),
      			'field' => array(
      				'handler' => 'views_handler_field',
      				'click sortable' => TRUE,
      			),
      			'filter' => array(
      				'handler' => 'views_handler_filter_numeric',
    			),
      		),
      		'uid' => array(
      			'title' => t('User'),
      			'help'  => t('The User who RSVP\'d'),
      			'field' => array(
      				'handler' => 'views_handler_field',
      				'click sortable' => TRUE,
      			)
      		),
      	),
    );
	return $data;
}

?>