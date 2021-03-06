/**
 * PW GRAPH
 * This is a sample server graph server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHomepageApiHandler.h"
#include "OAIHomepageApiRequest.h"

namespace OpenAPI {

OAIHomepageApiHandler::OAIHomepageApiHandler(){

}

OAIHomepageApiHandler::~OAIHomepageApiHandler(){

}

void OAIHomepageApiHandler::getHomepage() {
    auto reqObj = qobject_cast<OAIHomepageApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->getHomepageResponse();
    }
}


}
