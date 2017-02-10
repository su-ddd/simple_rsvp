<?php

class simple_rsvp_handler_oid extends views_handler_field {
	public function construct() {
		parent::construct();
		$this->additional_fields['option_name'] = array('table' => 'simple_rsvp_options', 'field' => 'name');
	}
	function render($values) {
    	$value = $this->get_value($values);
    	return $this->sanitize_value($value);
  	}

}