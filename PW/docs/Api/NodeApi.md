# OpenAPI\Client\NodeApi

All URIs are relative to https://graph.swagger.io/v2.

Method | HTTP request | Description
------------- | ------------- | -------------
[**addCustomNode()**](NodeApi.md#addCustomNode) | **POST** /nodes | Add a custom node to the graph
[**addNodeParameter()**](NodeApi.md#addNodeParameter) | **PUT** /nodes/{nodeId} | Adds a new parameter to the node
[**addNodeTrigger()**](NodeApi.md#addNodeTrigger) | **POST** /nodes/{nodeId} | Add node trigger
[**addTemplateNode()**](NodeApi.md#addTemplateNode) | **PUT** /nodes | Add template node to the graph
[**deleteNode()**](NodeApi.md#deleteNode) | **DELETE** /nodes/{nodeId} | Deletes a node
[**editNodeParameter()**](NodeApi.md#editNodeParameter) | **PATCH** /nodes/{nodeId} | Updates a node parameter
[**findNodesByStatus()**](NodeApi.md#findNodesByStatus) | **GET** /node/findByStatus | Finds node by status
[**getNodeById()**](NodeApi.md#getNodeById) | **GET** /nodes/{nodeId} | Find node by ID
[**nodesGet()**](NodeApi.md#nodesGet) | **GET** /nodes | Show nodes in the selected graph


## `addCustomNode()`

```php
addCustomNode($body)
```

Add a custom node to the graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \OpenAPI\Client\Model\Node(); // \OpenAPI\Client\Model\Node | Node object that needs to be added to the network

try {
    $apiInstance->addCustomNode($body);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->addCustomNode: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\OpenAPI\Client\Model\Node**](../Model/Node.md)| Node object that needs to be added to the network |

### Return type

void (empty response body)

### Authorization

[graphDB_auth](../../README.md#graphDB_auth)

### HTTP request headers

- **Content-Type**: `application/json`, `application/xml`
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `addNodeParameter()`

```php
addNodeParameter($node_id, $name, $parameter_type, $parameter_value): \OpenAPI\Client\Model\Node
```

Adds a new parameter to the node

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$node_id = 56; // int | ID of the node that needs to be updated
$name = 'name_example'; // string | The name of the added parameter
$parameter_type = 'parameter_type_example'; // string | The type of parameter added to the node
$parameter_value = 'parameter_value_example'; // string | The value of the parameter added to the node

try {
    $result = $apiInstance->addNodeParameter($node_id, $name, $parameter_type, $parameter_value);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->addNodeParameter: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **node_id** | **int**| ID of the node that needs to be updated |
 **name** | **string**| The name of the added parameter |
 **parameter_type** | **string**| The type of parameter added to the node |
 **parameter_value** | **string**| The value of the parameter added to the node |

### Return type

[**\OpenAPI\Client\Model\Node**](../Model/Node.md)

### Authorization

[api_key](../../README.md#api_key)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`
- **Accept**: `application/xml`, `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `addNodeTrigger()`

```php
addNodeTrigger($node_id, $target_parameter, $trigger_type, $trigger_index, $target_node_id): \OpenAPI\Client\Model\Node
```

Add node trigger

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');

// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$node_id = 56; // int | ID of the node that needs to be updated
$target_parameter = 'target_parameter_example'; // string | Name of the target trigger parameter
$trigger_type = 'trigger_type_example'; // string | The type of trigger condition
$trigger_index = 56; // int | If provided, specifies the trigger to be replaced
$target_node_id = 56; // int | The ID of the target node. If not provided, global graph variables will be used

try {
    $result = $apiInstance->addNodeTrigger($node_id, $target_parameter, $trigger_type, $trigger_index, $target_node_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->addNodeTrigger: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **node_id** | **int**| ID of the node that needs to be updated |
 **target_parameter** | **string**| Name of the target trigger parameter |
 **trigger_type** | **string**| The type of trigger condition |
 **trigger_index** | **int**| If provided, specifies the trigger to be replaced | [optional]
 **target_node_id** | **int**| The ID of the target node. If not provided, global graph variables will be used | [optional]

### Return type

[**\OpenAPI\Client\Model\Node**](../Model/Node.md)

### Authorization

[api_key](../../README.md#api_key), [graphDB_auth](../../README.md#graphDB_auth)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`
- **Accept**: `application/xml`, `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `addTemplateNode()`

```php
addTemplateNode($body)
```

Add template node to the graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \OpenAPI\Client\Model\Node(); // \OpenAPI\Client\Model\Node | Node object that needs to be added to the network

try {
    $apiInstance->addTemplateNode($body);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->addTemplateNode: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\OpenAPI\Client\Model\Node**](../Model/Node.md)| Node object that needs to be added to the network |

### Return type

void (empty response body)

### Authorization

[graphDB_auth](../../README.md#graphDB_auth)

### HTTP request headers

- **Content-Type**: `application/json`, `application/xml`
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `deleteNode()`

```php
deleteNode($node_id, $api_key)
```

Deletes a node

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$node_id = 56; // int | Node ID to delete
$api_key = 'api_key_example'; // string

try {
    $apiInstance->deleteNode($node_id, $api_key);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->deleteNode: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **node_id** | **int**| Node ID to delete |
 **api_key** | **string**|  | [optional]

### Return type

void (empty response body)

### Authorization

[graphDB_auth](../../README.md#graphDB_auth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `editNodeParameter()`

```php
editNodeParameter($node_id, $name, $parameter_value): \OpenAPI\Client\Model\Node
```

Updates a node parameter

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$node_id = 56; // int | ID of the node that needs to be updated
$name = 'name_example'; // string | The name of the modified parameter
$parameter_value = 'parameter_value_example'; // string | The value of the edited parameter. If not provided, the parameter is deleted

try {
    $result = $apiInstance->editNodeParameter($node_id, $name, $parameter_value);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->editNodeParameter: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **node_id** | **int**| ID of the node that needs to be updated |
 **name** | **string**| The name of the modified parameter |
 **parameter_value** | **string**| The value of the edited parameter. If not provided, the parameter is deleted | [optional]

### Return type

[**\OpenAPI\Client\Model\Node**](../Model/Node.md)

### Authorization

[api_key](../../README.md#api_key)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`
- **Accept**: `application/xml`, `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `findNodesByStatus()`

```php
findNodesByStatus($status): \OpenAPI\Client\Model\Node[]
```

Finds node by status

Multiple status values can be provided with comma separated strings

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$status = array('status_example'); // string[] | Status values that need to be considered for filter

try {
    $result = $apiInstance->findNodesByStatus($status);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->findNodesByStatus: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **status** | [**string[]**](../Model/string.md)| Status values that need to be considered for filter |

### Return type

[**\OpenAPI\Client\Model\Node[]**](../Model/Node.md)

### Authorization

[graphDB_auth](../../README.md#graphDB_auth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/xml`, `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getNodeById()`

```php
getNodeById($node_id): \OpenAPI\Client\Model\Node
```

Find node by ID

Returns a single node

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$node_id = 56; // int | ID of node to return

try {
    $result = $apiInstance->getNodeById($node_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->getNodeById: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **node_id** | **int**| ID of node to return |

### Return type

[**\OpenAPI\Client\Model\Node**](../Model/Node.md)

### Authorization

[api_key](../../README.md#api_key)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/xml`, `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `nodesGet()`

```php
nodesGet()
```

Show nodes in the selected graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\NodeApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->nodesGet();
} catch (Exception $e) {
    echo 'Exception when calling NodeApi->nodesGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[graphDB_auth](../../README.md#graphDB_auth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
