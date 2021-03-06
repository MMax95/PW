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

#include "OAIHelpers.h"
#include "OAINodeApiRequest.h"

namespace OpenAPI {

OAINodeApiRequest::OAINodeApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAINodeApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAINodeApiRequest::~OAINodeApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAINodeApiRequest::~OAINodeApiRequest()";
}

QMap<QString, QString>
OAINodeApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAINodeApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAINodeApiRequest::getRawSocket(){
    return socket;
}


void OAINodeApiRequest::addCustomNodeRequest(){
    qDebug() << "/v2/nodes";
    connect(this, &OAINodeApiRequest::addCustomNode, handler.data(), &OAINodeApiHandler::addCustomNode);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAINode body;
    ::OpenAPI::fromJsonValue(body, obj);
    

    emit addCustomNode(body);
}


void OAINodeApiRequest::addNodeParameterRequest(const QString& node_idstr){
    qDebug() << "/v2/nodes/{nodeId}";
    connect(this, &OAINodeApiRequest::addNodeParameter, handler.data(), &OAINodeApiHandler::addNodeParameter);

    
    qint64 node_id;
    fromStringValue(node_idstr, node_id);
    
    QString name;
    QString parameter_type;
    QString parameter_value;

    emit addNodeParameter(node_id, name, parameter_type, parameter_value);
}


void OAINodeApiRequest::addNodeTriggerRequest(const QString& node_idstr){
    qDebug() << "/v2/nodes/{nodeId}";
    connect(this, &OAINodeApiRequest::addNodeTrigger, handler.data(), &OAINodeApiHandler::addNodeTrigger);

    
    qint64 node_id;
    fromStringValue(node_idstr, node_id);
    
    qint64 trigger_index;
    qint64 target_node_id;
    QString target_parameter;
    QString trigger_type;

    emit addNodeTrigger(node_id, target_parameter, trigger_type, trigger_index, target_node_id);
}


void OAINodeApiRequest::addTemplateNodeRequest(){
    qDebug() << "/v2/nodes";
    connect(this, &OAINodeApiRequest::addTemplateNode, handler.data(), &OAINodeApiHandler::addTemplateNode);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAINode body;
    ::OpenAPI::fromJsonValue(body, obj);
    

    emit addTemplateNode(body);
}


void OAINodeApiRequest::deleteNodeRequest(const QString& node_idstr){
    qDebug() << "/v2/nodes/{nodeId}";
    connect(this, &OAINodeApiRequest::deleteNode, handler.data(), &OAINodeApiHandler::deleteNode);

    
    qint64 node_id;
    fromStringValue(node_idstr, node_id);
    
    QString api_key;
    if(socket->headers().keys().contains("api_key")){
        fromStringValue(socket->queryString().value("api_key"), api_key);
    }
    

    emit deleteNode(node_id, api_key);
}


void OAINodeApiRequest::editNodeParameterRequest(const QString& node_idstr){
    qDebug() << "/v2/nodes/{nodeId}";
    connect(this, &OAINodeApiRequest::editNodeParameter, handler.data(), &OAINodeApiHandler::editNodeParameter);

    
    qint64 node_id;
    fromStringValue(node_idstr, node_id);
    
    QString name;
    QString parameter_value;

    emit editNodeParameter(node_id, name, parameter_value);
}


void OAINodeApiRequest::findNodesByStatusRequest(){
    qDebug() << "/v2/node/findByStatus";
    connect(this, &OAINodeApiRequest::findNodesByStatus, handler.data(), &OAINodeApiHandler::findNodesByStatus);

    
    QList<QString> status;
    if(socket->queryString().keys().contains("status")){
        fromStringValue(socket->queryString().values("status"), status);
    }
    


    emit findNodesByStatus(status);
}


void OAINodeApiRequest::getNodeByIdRequest(const QString& node_idstr){
    qDebug() << "/v2/nodes/{nodeId}";
    connect(this, &OAINodeApiRequest::getNodeById, handler.data(), &OAINodeApiHandler::getNodeById);

    
    qint64 node_id;
    fromStringValue(node_idstr, node_id);
    

    emit getNodeById(node_id);
}


void OAINodeApiRequest::nodesGetRequest(){
    qDebug() << "/v2/nodes";
    connect(this, &OAINodeApiRequest::nodesGet, handler.data(), &OAINodeApiHandler::nodesGet);

    


    emit nodesGet();
}



void OAINodeApiRequest::addCustomNodeResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::addNodeParameterResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::addNodeTriggerResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::addTemplateNodeResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::deleteNodeResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::editNodeParameterResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::findNodesByStatusResponse(const QList<OAINode>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::getNodeByIdResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::nodesGetResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}


void OAINodeApiRequest::addCustomNodeError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::addNodeParameterError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::addNodeTriggerError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::addTemplateNodeError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::deleteNodeError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::editNodeParameterError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::findNodesByStatusError(const QList<OAINode>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::getNodeByIdError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::nodesGetError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAINodeApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAINodeApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
