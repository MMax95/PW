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
#include "OAIGraphApiRequest.h"

namespace OpenAPI {

OAIGraphApiRequest::OAIGraphApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIGraphApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIGraphApiRequest::~OAIGraphApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIGraphApiRequest::~OAIGraphApiRequest()";
}

QMap<QString, QString>
OAIGraphApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIGraphApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIGraphApiRequest::getRawSocket(){
    return socket;
}


void OAIGraphApiRequest::addCustomGraphRequest(){
    qDebug() << "/v2/graphs";
    connect(this, &OAIGraphApiRequest::addCustomGraph, handler.data(), &OAIGraphApiHandler::addCustomGraph);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAINode body;
    ::OpenAPI::fromJsonValue(body, obj);
    

    emit addCustomGraph(body);
}


void OAIGraphApiRequest::addFilterViewRequest(const QString& graph_idstr){
    qDebug() << "/v2/graphs/{graphId}";
    connect(this, &OAIGraphApiRequest::addFilterView, handler.data(), &OAIGraphApiHandler::addFilterView);

    
    qint64 graph_id;
    fromStringValue(graph_idstr, graph_id);
    
    qint64 view_index;
    QString target_parameter;

    emit addFilterView(graph_id, view_index, target_parameter);
}


void OAIGraphApiRequest::addGraphParameterRequest(const QString& graph_idstr){
    qDebug() << "/v2/graphs/{graphId}";
    connect(this, &OAIGraphApiRequest::addGraphParameter, handler.data(), &OAIGraphApiHandler::addGraphParameter);

    
    qint64 graph_id;
    fromStringValue(graph_idstr, graph_id);
    
    QString name;
    QString parameter_type;
    QString parameter_value;

    emit addGraphParameter(graph_id, name, parameter_type, parameter_value);
}


void OAIGraphApiRequest::addTemplateGraphRequest(){
    qDebug() << "/v2/graphs";
    connect(this, &OAIGraphApiRequest::addTemplateGraph, handler.data(), &OAIGraphApiHandler::addTemplateGraph);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIGraph body;
    ::OpenAPI::fromJsonValue(body, obj);
    

    emit addTemplateGraph(body);
}


void OAIGraphApiRequest::deleteGraphRequest(const QString& graph_idstr){
    qDebug() << "/v2/graphs/{graphId}";
    connect(this, &OAIGraphApiRequest::deleteGraph, handler.data(), &OAIGraphApiHandler::deleteGraph);

    
    qint64 graph_id;
    fromStringValue(graph_idstr, graph_id);
    
    QString api_key;
    if(socket->headers().keys().contains("api_key")){
        fromStringValue(socket->queryString().value("api_key"), api_key);
    }
    

    emit deleteGraph(graph_id, api_key);
}


void OAIGraphApiRequest::editGraphParameterRequest(const QString& graph_idstr){
    qDebug() << "/v2/graphs/{graphId}";
    connect(this, &OAIGraphApiRequest::editGraphParameter, handler.data(), &OAIGraphApiHandler::editGraphParameter);

    
    qint64 graph_id;
    fromStringValue(graph_idstr, graph_id);
    
    QString name;
    QString parameter_value;

    emit editGraphParameter(graph_id, name, parameter_value);
}


void OAIGraphApiRequest::getGraphByIdRequest(const QString& graph_idstr){
    qDebug() << "/v2/graphs/{graphId}";
    connect(this, &OAIGraphApiRequest::getGraphById, handler.data(), &OAIGraphApiHandler::getGraphById);

    
    qint64 graph_id;
    fromStringValue(graph_idstr, graph_id);
    

    emit getGraphById(graph_id);
}


void OAIGraphApiRequest::graphsGetRequest(){
    qDebug() << "/v2/graphs";
    connect(this, &OAIGraphApiRequest::graphsGet, handler.data(), &OAIGraphApiHandler::graphsGet);

    


    emit graphsGet();
}



void OAIGraphApiRequest::addCustomGraphResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::addFilterViewResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::addGraphParameterResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::addTemplateGraphResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::deleteGraphResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::editGraphParameterResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::getGraphByIdResponse(const OAINode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::graphsGetResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIGraphApiRequest::addCustomGraphError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::addFilterViewError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::addGraphParameterError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::addTemplateGraphError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::deleteGraphError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::editGraphParameterError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::getGraphByIdError(const OAINode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::graphsGetError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIGraphApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIGraphApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
