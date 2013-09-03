<?php
require_once './includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
class TddTests extends PHPUnit_Framework_TestCase
{
  public function test_tdd_help()
  {
    $this->assertEquals(
      tdd_help('admin/content/tdd'), "<p>Help for TDD module.</p>");
  }
}
?>