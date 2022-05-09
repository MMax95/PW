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

#include "OAINode.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINode::OAINode(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINode::OAINode() {
    this->initializeModel();
}

OAINode::~OAINode() {}

void OAINode::initializeModel() {

    m_node_id_isSet = false;
    m_node_id_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_parameters_isSet = false;
    m_parameters_isValid = false;

    m_relations_isSet = false;
    m_relations_isValid = false;
}

void OAINode::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINode::fromJsonObject(QJsonObject json) {

    m_node_id_isValid = ::OpenAPI::fromJsonValue(node_id, json[QString("nodeID")]);
    m_node_id_isSet = !json[QString("nodeID")].isNull() && m_node_id_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_parameters_isValid = ::OpenAPI::fromJsonValue(parameters, json[QString("parameters")]);
    m_parameters_isSet = !json[QString("parameters")].isNull() && m_parameters_isValid;

    m_relations_isValid = ::OpenAPI::fromJsonValue(relations, json[QString("relations")]);
    m_relations_isSet = !json[QString("relations")].isNull() && m_relations_isValid;
}

QString OAINode::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINode::asJsonObject() const {
    QJsonObject obj;
    if (m_node_id_isSet) {
        obj.insert(QString("nodeID"), ::OpenAPI::toJsonValue(node_id));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (parameters.size() > 0) {
        obj.insert(QString("parameters"), ::OpenAPI::toJsonValue(parameters));
    }
    if (relations.size() > 0) {
        obj.insert(QString("relations"), ::OpenAPI::toJsonValue(relations));
    }
    return obj;
}

qint64 OAINode::getNodeId() const {
    return node_id;
}
void OAINode::setNodeId(const qint64 &node_id) {
    this->node_id = node_id;
    this->m_node_id_isSet = true;
}

bool OAINode::is_node_id_Set() const{
    return m_node_id_isSet;
}

bool OAINode::is_node_id_Valid() const{
    return m_node_id_isValid;
}

QString OAINode::getStatus() const {
    return status;
}
void OAINode::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAINode::is_status_Set() const{
    return m_status_isSet;
}

bool OAINode::is_status_Valid() const{
    return m_status_isValid;
}

QList<OAIParameter> OAINode::getParameters() const {
    return parameters;
}
void OAINode::setParameters(const QList<OAIParameter> &parameters) {
    this->parameters = parameters;
    this->m_parameters_isSet = true;
}

bool OAINode::is_parameters_Set() const{
    return m_parameters_isSet;
}

bool OAINode::is_parameters_Valid() const{
    return m_parameters_isValid;
}

QList<OAIRelation> OAINode::getRelations() const {
    return relations;
}
void OAINode::setRelations(const QList<OAIRelation> &relations) {
    this->relations = relations;
    this->m_relations_isSet = true;
}

bool OAINode::is_relations_Set() const{
    return m_relations_isSet;
}

bool OAINode::is_relations_Valid() const{
    return m_relations_isValid;
}

bool OAINode::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_node_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (parameters.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (relations.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINode::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_node_id_isValid && true;
}

} // namespace OpenAPI