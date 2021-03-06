<?php

/**
 * PW GRAPH
 * PHP version 7.4
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * This is a sample server graph server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
 * The version of the OpenAPI document: 1.0.0
 * Contact: apiteam@swagger.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\Action;

/**
 * ActionTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\Action
 */
class ActionTest extends TestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown(): void
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass(): void
    {
    }

    /**
     * Test "Action"
     */
    public function testAction()
    {
        $testAction = new Action();
        $namespacedClassname = Action::getModelsNamespace() . '\\Action';
        $this->assertSame('\\' . Action::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "Action" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "actionType"
     */
    public function testPropertyActionType()
    {
        $this->markTestIncomplete(
            'Test of "actionType" property in "Action" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "sourceParameterID"
     */
    public function testPropertySourceParameterID()
    {
        $this->markTestIncomplete(
            'Test of "sourceParameterID" property in "Action" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "targetParameterID"
     */
    public function testPropertyTargetParameterID()
    {
        $this->markTestIncomplete(
            'Test of "targetParameterID" property in "Action" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = Action::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
