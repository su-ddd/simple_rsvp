<?php

class simple_rsvp_filter_handler_oid extends views_handler_filter_in_operator {
	public function get_value_options() {
    $options = parent::get_value_options();
    dpm($options);
    return $this->value_options;
  }

}