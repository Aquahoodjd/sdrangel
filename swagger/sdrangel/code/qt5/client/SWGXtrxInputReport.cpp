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


#include "SWGXtrxInputReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGXtrxInputReport::SWGXtrxInputReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGXtrxInputReport::SWGXtrxInputReport() {
    success = 0;
    m_success_isSet = false;
    fifo_size = 0;
    m_fifo_size_isSet = false;
    fifo_fill = 0;
    m_fifo_fill_isSet = false;
    temperature = 0.0f;
    m_temperature_isSet = false;
    gps_lock = 0;
    m_gps_lock_isSet = false;
}

SWGXtrxInputReport::~SWGXtrxInputReport() {
    this->cleanup();
}

void
SWGXtrxInputReport::init() {
    success = 0;
    m_success_isSet = false;
    fifo_size = 0;
    m_fifo_size_isSet = false;
    fifo_fill = 0;
    m_fifo_fill_isSet = false;
    temperature = 0.0f;
    m_temperature_isSet = false;
    gps_lock = 0;
    m_gps_lock_isSet = false;
}

void
SWGXtrxInputReport::cleanup() {





}

SWGXtrxInputReport*
SWGXtrxInputReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGXtrxInputReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&success, pJson["success"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fifo_size, pJson["fifoSize"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fifo_fill, pJson["fifoFill"], "qint32", "");
    
    ::SWGSDRangel::setValue(&temperature, pJson["temperature"], "float", "");
    
    ::SWGSDRangel::setValue(&gps_lock, pJson["gpsLock"], "qint32", "");
    
}

QString
SWGXtrxInputReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGXtrxInputReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_success_isSet){
        obj->insert("success", QJsonValue(success));
    }
    if(m_fifo_size_isSet){
        obj->insert("fifoSize", QJsonValue(fifo_size));
    }
    if(m_fifo_fill_isSet){
        obj->insert("fifoFill", QJsonValue(fifo_fill));
    }
    if(m_temperature_isSet){
        obj->insert("temperature", QJsonValue(temperature));
    }
    if(m_gps_lock_isSet){
        obj->insert("gpsLock", QJsonValue(gps_lock));
    }

    return obj;
}

qint32
SWGXtrxInputReport::getSuccess() {
    return success;
}
void
SWGXtrxInputReport::setSuccess(qint32 success) {
    this->success = success;
    this->m_success_isSet = true;
}

qint32
SWGXtrxInputReport::getFifoSize() {
    return fifo_size;
}
void
SWGXtrxInputReport::setFifoSize(qint32 fifo_size) {
    this->fifo_size = fifo_size;
    this->m_fifo_size_isSet = true;
}

qint32
SWGXtrxInputReport::getFifoFill() {
    return fifo_fill;
}
void
SWGXtrxInputReport::setFifoFill(qint32 fifo_fill) {
    this->fifo_fill = fifo_fill;
    this->m_fifo_fill_isSet = true;
}

float
SWGXtrxInputReport::getTemperature() {
    return temperature;
}
void
SWGXtrxInputReport::setTemperature(float temperature) {
    this->temperature = temperature;
    this->m_temperature_isSet = true;
}

qint32
SWGXtrxInputReport::getGpsLock() {
    return gps_lock;
}
void
SWGXtrxInputReport::setGpsLock(qint32 gps_lock) {
    this->gps_lock = gps_lock;
    this->m_gps_lock_isSet = true;
}


bool
SWGXtrxInputReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_success_isSet){ isObjectUpdated = true; break;}
        if(m_fifo_size_isSet){ isObjectUpdated = true; break;}
        if(m_fifo_fill_isSet){ isObjectUpdated = true; break;}
        if(m_temperature_isSet){ isObjectUpdated = true; break;}
        if(m_gps_lock_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

