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


#include "SWGComplex.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGComplex::SWGComplex(QString* json) {
    init();
    this->fromJson(*json);
}

SWGComplex::SWGComplex() {
    real = 0.0f;
    m_real_isSet = false;
    imag = 0.0f;
    m_imag_isSet = false;
}

SWGComplex::~SWGComplex() {
    this->cleanup();
}

void
SWGComplex::init() {
    real = 0.0f;
    m_real_isSet = false;
    imag = 0.0f;
    m_imag_isSet = false;
}

void
SWGComplex::cleanup() {


}

SWGComplex*
SWGComplex::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGComplex::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&real, pJson["real"], "float", "");
    
    ::SWGSDRangel::setValue(&imag, pJson["imag"], "float", "");
    
}

QString
SWGComplex::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGComplex::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_real_isSet){
        obj->insert("real", QJsonValue(real));
    }
    if(m_imag_isSet){
        obj->insert("imag", QJsonValue(imag));
    }

    return obj;
}

float
SWGComplex::getReal() {
    return real;
}
void
SWGComplex::setReal(float real) {
    this->real = real;
    this->m_real_isSet = true;
}

float
SWGComplex::getImag() {
    return imag;
}
void
SWGComplex::setImag(float imag) {
    this->imag = imag;
    this->m_imag_isSet = true;
}


bool
SWGComplex::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_real_isSet){ isObjectUpdated = true; break;}
        if(m_imag_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

