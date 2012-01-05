/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtSystems module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#ifndef QDECLARATIVESTORAGEINFO_P_H
#define QDECLARATIVESTORAGEINFO_P_H

#include <qstorageinfo.h>

QT_BEGIN_HEADER
QT_BEGIN_NAMESPACE

class QDeclarativeStorageInfo : public QObject
{
    Q_OBJECT

    Q_ENUMS(DriveType)

    Q_PROPERTY(bool monitorAllLogicalDrives READ monitorAllLogicalDrives WRITE setMonitorAllLogicalDrives NOTIFY monitorAllLogicalDrivesChanged)

    Q_PROPERTY(QStringList allLogicalDrives READ allLogicalDrives NOTIFY logicalDriveChanged)

public:
    enum DriveType {
        UnknownDrive = QStorageInfo::UnknownDrive,
        InternalDrive = QStorageInfo::InternalDrive,
        RemovableDrive = QStorageInfo::RemovableDrive,
        RemoteDrive = QStorageInfo::RemoteDrive,
        CdromDrive = QStorageInfo::CdromDrive,
        RamDrive = QStorageInfo::RamDrive
    };

    QDeclarativeStorageInfo(QObject *parent = 0);
    virtual ~QDeclarativeStorageInfo();

    bool monitorAllLogicalDrives() const;
    void setMonitorAllLogicalDrives(bool monitor);
    QStringList allLogicalDrives() const;

    Q_INVOKABLE qlonglong availableDiskSpace(const QString &drive) const;
    Q_INVOKABLE qlonglong totalDiskSpace(const QString &drive) const;
    Q_INVOKABLE QString uriForDrive(const QString &drive) const;
    Q_INVOKABLE DriveType driveType(const QString &drive) const;

Q_SIGNALS:
    void monitorAllLogicalDrivesChanged();

    void logicalDriveChanged(const QString &drive, bool added);

private:
    QStorageInfo *storageInfo;

    bool isMonitorAllLogicalDrives;
};

QT_END_NAMESPACE
QT_END_HEADER

#endif // QDECLARATIVESTORAGEINFO_P_H
