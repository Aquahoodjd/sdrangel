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

/*
 * SWGRDSReport.h
 *
 * RDS information
 */

#ifndef SWGRDSReport_H_
#define SWGRDSReport_H_

#include <QJsonObject>


#include "SWGRDSReport_altFrequencies.h"
#include <QList>
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGRDSReport: public SWGObject {
public:
    SWGRDSReport();
    SWGRDSReport(QString* json);
    virtual ~SWGRDSReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGRDSReport* fromJson(QString &jsonString) override;

    qint32 getDemodStatus();
    void setDemodStatus(qint32 demod_status);

    qint32 getDecodStatus();
    void setDecodStatus(qint32 decod_status);

    float getRdsDemodAccumDb();
    void setRdsDemodAccumDb(float rds_demod_accum_db);

    float getRdsDemodFrequency();
    void setRdsDemodFrequency(float rds_demod_frequency);

    QString* getPid();
    void setPid(QString* pid);

    QString* getPiType();
    void setPiType(QString* pi_type);

    QString* getPiCoverage();
    void setPiCoverage(QString* pi_coverage);

    QString* getProgServiceName();
    void setProgServiceName(QString* prog_service_name);

    QString* getMusicSpeech();
    void setMusicSpeech(QString* music_speech);

    QString* getMonoStereo();
    void setMonoStereo(QString* mono_stereo);

    QString* getRadioText();
    void setRadioText(QString* radio_text);

    QString* getTime();
    void setTime(QString* time);

    QList<SWGRDSReport_altFrequencies*>* getAltFrequencies();
    void setAltFrequencies(QList<SWGRDSReport_altFrequencies*>* alt_frequencies);


    virtual bool isSet() override;

private:
    qint32 demod_status;
    bool m_demod_status_isSet;

    qint32 decod_status;
    bool m_decod_status_isSet;

    float rds_demod_accum_db;
    bool m_rds_demod_accum_db_isSet;

    float rds_demod_frequency;
    bool m_rds_demod_frequency_isSet;

    QString* pid;
    bool m_pid_isSet;

    QString* pi_type;
    bool m_pi_type_isSet;

    QString* pi_coverage;
    bool m_pi_coverage_isSet;

    QString* prog_service_name;
    bool m_prog_service_name_isSet;

    QString* music_speech;
    bool m_music_speech_isSet;

    QString* mono_stereo;
    bool m_mono_stereo_isSet;

    QString* radio_text;
    bool m_radio_text_isSet;

    QString* time;
    bool m_time_isSet;

    QList<SWGRDSReport_altFrequencies*>* alt_frequencies;
    bool m_alt_frequencies_isSet;

};

}

#endif /* SWGRDSReport_H_ */
