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

/*
 * OAIAction.h
 *
 * 
 */

#ifndef OAIAction_H
#define OAIAction_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAction : public OAIObject {
public:
    OAIAction();
    OAIAction(QString json);
    ~OAIAction() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getActionType() const;
    void setActionType(const QString &action_type);
    bool is_action_type_Set() const;
    bool is_action_type_Valid() const;

    qint64 getSourceParameterId() const;
    void setSourceParameterId(const qint64 &source_parameter_id);
    bool is_source_parameter_id_Set() const;
    bool is_source_parameter_id_Valid() const;

    qint64 getTargetParameterId() const;
    void setTargetParameterId(const qint64 &target_parameter_id);
    bool is_target_parameter_id_Set() const;
    bool is_target_parameter_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString action_type;
    bool m_action_type_isSet;
    bool m_action_type_isValid;

    qint64 source_parameter_id;
    bool m_source_parameter_id_isSet;
    bool m_source_parameter_id_isValid;

    qint64 target_parameter_id;
    bool m_target_parameter_id_isSet;
    bool m_target_parameter_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAction)

#endif // OAIAction_H
