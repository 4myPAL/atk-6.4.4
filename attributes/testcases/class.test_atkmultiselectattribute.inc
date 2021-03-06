<?php

    /**
     * This file is part of the Achievo ATK distribution.
     * Detailed copyright and licensing information can be found
     * in the doc/COPYRIGHT and doc/LICENSE files which should be 
     * included in the distribution.
     *
     * @package atk
     * @subpackage attributes
     * @access private
     *
     * @copyright (c)2008 Sandy Pleyte
     * @license http://www.achievo.org/atk/licensing ATK Open Source License
     *
     * @version $Revision: 5798 $
     * $Id: class.test_atkmultiselectattribute.inc 6354 2009-04-15 02:41:21Z mvdam $
     */
  
    /**
     * Include the class we are about to test.
     */
    atkimport("atk.attributes.atkmultiselectattribute");
  
    /**
     * Testcases for class atkmultiselectattribute.
     *
     * @author Sandy Pleyte <sandy@achievo.org>
     * @package atk
     * @subpackage attributes
     * @access private
     */
    class test_atkmultiselectattribute extends atkAttributeTestCase
    {    
      /**
       * Setup the testcase.
       */
      function setup()
      {              
      }
      
      /**
       * Test method. 
       */
      function test_attribute()
      {           
        $this->apiTest(new atkMultiSelectAttribute("name",array('option1','option2')));
      }           
      
      /**
       * Check if isEmpty returns true for empty records.
       * @access private
       */
      function _testIsEmpty()
      {
        parent::_testIsEmpty();
        $this->assertFalse($this->m_attribute->isEmpty(array($this->m_attribute->m_name=>array(0=>1,1=>2))), "isempty");
      }
         
    }   
 ?>