///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2019 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef SDRBASE_DEVICE_DEVICEUSERARGS_H_
#define SDRBASE_DEVICE_DEVICEUSERARGS_H_

#include <QList>
#include <QString>
#include <QByteArray>

#include "export.h"

struct SDRBASE_API DeviceUserArgs
{
public:
    struct Args {
        QString m_id;
        int m_sequence;
        QString m_args;

        bool operator==(const Args& rhs) { //!< reference equality
            return (m_id == rhs.m_id) && (m_sequence == rhs.m_sequence);
        }

        friend QDataStream &operator << (QDataStream &ds, const Args &inObj);
        friend QDataStream &operator >> (QDataStream &ds, Args &outObj);
    };

	QByteArray serialize() const;
	bool deserialize(const QByteArray& data);
    QList<Args>::iterator findDeviceArgs(const QString& id, int sequence);
    QString findUserArgs(const QString& id, int sequence);
    void addDeviceArgs(const QString& id, int sequence, const QString& args);         //!< Will not add if it exists for same reference
    void addOrUpdateDeviceArgs(const QString& id, int sequence, const QString& args); //!< Add or update if it exists for same reference
    void updateDeviceArgs(const QString& id, int sequence, const QString& args);      //!< Will not update if reference does not exist
    void deleteDeviceArgs(const QString& id, int sequence);
    const QList<Args>& getArgsByDevice() const { return m_argsByDevice; }

    QList<Args> m_argsByDevice; //!< args corresponding to a device
};


#endif // SDRBASE_DEVICE_DEVICEUSERARGS_H_