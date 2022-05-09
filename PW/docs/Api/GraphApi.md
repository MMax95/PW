# OpenAPI\Client\GraphApi

All URIs are relative to https://graph.swagger.io/v2.

Method | HTTP request | Description
------------- | ------------- | -------------
[**addCustomGraph()**](GraphApi.md#addCustomGraph) | **POST** /graphs | Add a new custom graph
[**addFilterView()**](GraphApi.md#addFilterView) | **POST** /graphs/{graphId} | Edit graph filter view
[**addGraphParameter()**](GraphApi.md#addGraphParameter) | **PUT** /graphs/{graphId} | Adds a new global parameter to the graph
[**addTemplateGraph()**](GraphApi.md#addTemplateGraph) | **PUT** /graphs | Add a new template graph
[**deleteGraph()**](GraphApi.md#deleteGraph) | **DELETE** /graphs/{graphId} | Deletes a graph
[**editGraphParameter()**](GraphApi.md#editGraphParameter) | **PATCH** /graphs/{graphId} | Updates a global parameter
[**getGraphById()**](GraphApi.md#getGraphById) | **GET** /graphs/{graphId} | Find graph by ID
[**graphsGet()**](GraphApi.md#graphsGet) | **GET** /graphs | Show user&#39;s graphs


## `addCustomGraph()`

```php
addCustomGraph($body)
```

Add a new custom graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \OpenAPI\Client\Model\Node(); // \OpenAPI\Client\Model\Node | Graph object hosting node network

try {
    $apiInstance->addCustomGraph($body);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->addCustomGraph: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\OpenAPI\Client\Model\Node**](../Model/Node.md)| Graph object hosting node network |

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

## `addFilterView()`

```php
addFilterView($graph_id, $view_index, $target_parameter): \OpenAPI\Client\Model\Node
```

Edit graph filter view

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


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$graph_id = 56; // int | ID of the node that needs to be updated
$view_index = 56; // int | If provided, specifies the view to be replaced
$target_parameter = 'target_parameter_example'; // string | Name of the target trigger parameter. If not provided, deletes the filtered view

try {
    $result = $apiInstance->addFilterView($graph_id, $view_index, $target_parameter);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->addFilterView: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **graph_id** | **int**| ID of the node that needs to be updated |
 **view_index** | **int**| If provided, specifies the view to be replaced | [optional]
 **target_parameter** | **string**| Name of the target trigger parameter. If not provided, deletes the filtered view | [optional]

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

## `addGraphParameter()`

```php
addGraphParameter($graph_id, $name, $parameter_type, $parameter_value): \OpenAPI\Client\Model\Node
```

Adds a new global parameter to the graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$graph_id = 56; // int | ID of the graph that needs to be updated
$name = 'name_example'; // string | The name of the added parameter
$parameter_type = 'parameter_type_example'; // string | The type of parameter added to the node
$parameter_value = 'parameter_value_example'; // string | The value of the parameter added to the node

try {
    $result = $apiInstance->addGraphParameter($graph_id, $name, $parameter_type, $parameter_value);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->addGraphParameter: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **graph_id** | **int**| ID of the graph that needs to be updated |
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

## `addTemplateGraph()`

```php
addTemplateGraph($body)
```

Add a new template graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$body = new \OpenAPI\Client\Model\Graph(); // \OpenAPI\Client\Model\Graph | Graph object hosting node network

try {
    $apiInstance->addTemplateGraph($body);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->addTemplateGraph: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**\OpenAPI\Client\Model\Graph**](../Model/Graph.md)| Graph object hosting node network |

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

## `deleteGraph()`

```php
deleteGraph($graph_id, $api_key)
```

Deletes a graph

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$graph_id = 56; // int | Id of the graph to delete
$api_key = 'api_key_example'; // string

try {
    $apiInstance->deleteGraph($graph_id, $api_key);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->deleteGraph: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **graph_id** | **int**| Id of the graph to delete |
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

## `editGraphParameter()`

```php
editGraphParameter($graph_id, $name, $parameter_value): \OpenAPI\Client\Model\Node
```

Updates a global parameter

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$graph_id = 56; // int | ID of the graph that needs to be updated
$name = 'name_example'; // string | The name of the modified parameter
$parameter_value = 'parameter_value_example'; // string | The value of the edited parameter. If not provided, the parameter is deleted

try {
    $result = $apiInstance->editGraphParameter($graph_id, $name, $parameter_value);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->editGraphParameter: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **graph_id** | **int**| ID of the graph that needs to be updated |
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

## `getGraphById()`

```php
getGraphById($graph_id): \OpenAPI\Client\Model\Node
```

Find graph by ID

Returns a graph network

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: api_key
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('api_key', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('api_key', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$graph_id = 56; // int | ID of graph to return

try {
    $result = $apiInstance->getGraphById($graph_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->getGraphById: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **graph_id** | **int**| ID of graph to return |

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

## `graphsGet()`

```php
graphsGet()
```

Show user's graphs

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure OAuth2 access token for authorization: graphDB_auth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\GraphApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->graphsGet();
} catch (Exception $e) {
    echo 'Exception when calling GraphApi->graphsGet: ', $e->getMessage(), PHP_EOL;
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
