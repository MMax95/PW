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

#ifndef OAI_APIROUTER_H
#define OAI_APIROUTER_H

#include <functional>
#include <QObject>
#include <QStringList>
#include <QSharedPointer>
#include <QList>
#include <QMultiMap>
#include <QRegularExpression>

#include <qhttpengine/socket.h>
#include <qhttpengine/handler.h>
#include <qhttpengine/qobjecthandler.h>

#include "OAIGraphApiHandler.h"
#include "OAIHomepageApiHandler.h"
#include "OAINodeApiHandler.h"
#include "OAIUserApiHandler.h"


namespace OpenAPI {

class OAIApiRequestHandler : public  QHttpEngine::QObjectHandler
{
    Q_OBJECT
signals:
    void requestReceived(QHttpEngine::Socket *socket);

protected:
    virtual void process(QHttpEngine::Socket *socket, const QString &path){
        Q_UNUSED(path);

        // If the slot requires all data to be received, check to see if this is
        // already the case, otherwise, wait until the rest of it arrives
        if (socket->bytesAvailable() >= socket->contentLength()) {
            emit requestReceived(socket);
        } else {
            connect(socket, &QHttpEngine::Socket::readChannelFinished, [this, socket]() {
                emit requestReceived(socket);
            });
        }
    }
};

class OAIApiRouter : public QObject
{
    Q_OBJECT
public:
    OAIApiRouter();
    virtual ~OAIApiRouter();

    void setUpRoutes();
    void processRequest(QHttpEngine::Socket *socket);
    
    void setOAIGraphApiHandler(QSharedPointer<OAIGraphApiHandler> handler);
    void setOAIHomepageApiHandler(QSharedPointer<OAIHomepageApiHandler> handler);
    void setOAINodeApiHandler(QSharedPointer<OAINodeApiHandler> handler);
    void setOAIUserApiHandler(QSharedPointer<OAIUserApiHandler> handler);
private:
    QMap<QString, std::function<void(QHttpEngine::Socket *)>> Routes;
    QMultiMap<QString, std::function<void(QHttpEngine::Socket *)>> RoutesWithPathParam;

    bool handleRequest(QHttpEngine::Socket *socket);
    bool handleRequestAndExtractPathParam(QHttpEngine::Socket *socket);

    
    QSharedPointer<OAIGraphApiHandler> mOAIGraphApiHandler;
    QSharedPointer<OAIHomepageApiHandler> mOAIHomepageApiHandler;
    QSharedPointer<OAINodeApiHandler> mOAINodeApiHandler;
    QSharedPointer<OAIUserApiHandler> mOAIUserApiHandler;
protected:
    // override this method to provide custom class derived from ApiHandler classes
    virtual void createApiHandlers();

private :
    inline QString fromQHttpEngineMethod(QHttpEngine::Socket::Method method){
        switch( method ){
            case QHttpEngine::Socket::Method::OPTIONS:
                return QStringLiteral("OPTIONS");
            case QHttpEngine::Socket::Method::GET:
                return QStringLiteral("GET");
            case QHttpEngine::Socket::Method::HEAD:
                return QStringLiteral("HEAD");
            case QHttpEngine::Socket::Method::POST:
                return QStringLiteral("POST");
            case QHttpEngine::Socket::Method::PUT:
                return QStringLiteral("PUT");
            case QHttpEngine::Socket::Method::DELETE:
                return QStringLiteral("DELETE");
            case QHttpEngine::Socket::Method::TRACE:
                return QStringLiteral("TRACE");
            case QHttpEngine::Socket::Method::CONNECT:
                return QStringLiteral("CONNECT");
        }
        return QStringLiteral("");
    }

    inline QRegularExpressionMatch getRequestMatch(QString serverTemplatePath, QString requestPath){
        QRegularExpression parExpr( R"(\{([^\/\s]+)\})" );
        serverTemplatePath.replace( parExpr, R"((?<\1>[^\/\s]+))" );
        serverTemplatePath.append("[\\/]?$");
        QRegularExpression pathExpr( serverTemplatePath );
        return pathExpr.match( requestPath );
    }

};


}

#endif // OAI_APIROUTER_H
