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

#ifndef OAI_OAIUserApiHandler_H
#define OAI_OAIUserApiHandler_H

#include <QObject>

#include "OAIUser.h"
#include <QString>

namespace OpenAPI {

class OAIUserApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIUserApiHandler();
    virtual ~OAIUserApiHandler();


public slots:
    virtual void createUser(OAIUser body);
    virtual void deleteUser(QString username);
    virtual void getUserByName(QString username);
    virtual void loginUser(QString username, QString password);
    virtual void logoutUser();
    virtual void updateUser(QString username, OAIUser body);
    

};

}

#endif // OAI_OAIUserApiHandler_H
