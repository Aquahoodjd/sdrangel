/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.1
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGPresetIdentifier.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPresetIdentifier::SWGPresetIdentifier(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPresetIdentifier::SWGPresetIdentifier() {
    group_name = nullptr;
    m_group_name_isSet = false;
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    type = nullptr;
    m_type_isSet = false;
    name = nullptr;
    m_name_isSet = false;
}

SWGPresetIdentifier::~SWGPresetIdentifier() {
    this->cleanup();
}

void
SWGPresetIdentifier::init() {
    group_name = new QString("");
    m_group_name_isSet = false;
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    name = new QString("");
    m_name_isSet = false;
}

void
SWGPresetIdentifier::cleanup() {
    if(group_name != nullptr) { 
        delete group_name;
    }

    if(type != nullptr) { 
        delete type;
    }
    if(name != nullptr) { 
        delete name;
    }
}

SWGPresetIdentifier*
SWGPresetIdentifier::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPresetIdentifier::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&group_name, pJson["groupName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&type, pJson["type"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
SWGPresetIdentifier::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPresetIdentifier::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(group_name != nullptr && *group_name != QString("")){
        toJsonValue(QString("groupName"), group_name, obj, QString("QString"));
    }
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGPresetIdentifier::getGroupName() {
    return group_name;
}
void
SWGPresetIdentifier::setGroupName(QString* group_name) {
    this->group_name = group_name;
    this->m_group_name_isSet = true;
}

qint64
SWGPresetIdentifier::getCenterFrequency() {
    return center_frequency;
}
void
SWGPresetIdentifier::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

QString*
SWGPresetIdentifier::getType() {
    return type;
}
void
SWGPresetIdentifier::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

QString*
SWGPresetIdentifier::getName() {
    return name;
}
void
SWGPresetIdentifier::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}


bool
SWGPresetIdentifier::isSet(){
    bool isObjectUpdated = false;
    do{
        if(group_name != nullptr && *group_name != QString("")){ isObjectUpdated = true; break;}
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

