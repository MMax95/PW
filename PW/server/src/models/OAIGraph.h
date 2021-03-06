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
 * OAIGraph.h
 *
 * 
 */

#ifndef OAIGraph_H
#define OAIGraph_H

#include <QJsonObject>

#include "OAIParameter.h"
#include "OAIView.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGraph : public OAIObject {
public:
    OAIGraph();
    OAIGraph(QString json);
    ~OAIGraph() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getGraphId() const;
    void setGraphId(const qint64 &graph_id);
    bool is_graph_id_Set() const;
    bool is_graph_id_Valid() const;

    QList<OAIParameter> getParameters() const;
    void setParameters(const QList<OAIParameter> &parameters);
    bool is_parameters_Set() const;
    bool is_parameters_Valid() const;

    QList<OAIView> getViews() const;
    void setViews(const QList<OAIView> &views);
    bool is_views_Set() const;
    bool is_views_Valid() const;

    qint64 getDefaultView() const;
    void setDefaultView(const qint64 &default_view);
    bool is_default_view_Set() const;
    bool is_default_view_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 graph_id;
    bool m_graph_id_isSet;
    bool m_graph_id_isValid;

    QList<OAIParameter> parameters;
    bool m_parameters_isSet;
    bool m_parameters_isValid;

    QList<OAIView> views;
    bool m_views_isSet;
    bool m_views_isValid;

    qint64 default_view;
    bool m_default_view_isSet;
    bool m_default_view_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGraph)

#endif // OAIGraph_H
