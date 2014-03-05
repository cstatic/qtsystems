/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSystems module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qbatteryinfo_android_p.h"

QT_BEGIN_NAMESPACE

// TODO: See BatteryManager

QBatteryInfoPrivate::QBatteryInfoPrivate(QBatteryInfo *parent) : q_ptr(parent)
{

}

QBatteryInfoPrivate::QBatteryInfoPrivate(int batteryIndex, QBatteryInfo *parent)
    : m_index(batteryIndex),
      q_ptr(parent)
{

}

QBatteryInfoPrivate::~QBatteryInfoPrivate()
{

}

void QBatteryInfo::isValid()
{

}

float QBatteryInfoPrivate::temperature()
{

}

float QBatteryInfoPrivate::temperature(int battery)
{

}

int QBatteryInfoPrivate::batteryCount()
{

}

int QBatteryInfoPrivate::batteryIndex() const
{

}

int QBatteryInfoPrivate::currentFlow()
{

}

int QBatteryInfoPrivate::currentFlow(int battery)
{

}

int QBatteryInfoPrivate::cycleCount()
{

}

int QBatteryInfoPrivate::cycleCount(int battery)
{

}

int QBatteryInfoPrivate::level()
{

}

int QBatteryInfoPrivate::level(int battery)
{

}

int QBatteryInfoPrivate::maximumCapacity()
{

}

int QBatteryInfoPrivate::maximumCapacity(int battery)
{

}

int QBatteryInfoPrivate::remainingCapacity()
{

}

int QBatteryInfoPrivate::remainingCapacity(int battery)
{

}

int QBatteryInfoPrivate::remainingChargingTime()
{

}

int QBatteryInfoPrivate::remainingChargingTime(int battery)
{

}

int QBatteryInfoPrivate::voltage()
{

}

int QBatteryInfoPrivate::voltage(int battery)
{

}

QBatteryInfo::ChargerType QBatteryInfoPrivate::chargerType()
{

}

QBatteryInfo::ChargingState QBatteryInfoPrivate::chargingState()
{

}

QBatteryInfo::ChargingState QBatteryInfoPrivate::chargingState(int battery)
{

}

QBatteryInfo::Health QBatteryInfoPrivate::health()
{

}

QBatteryInfo::Health QBatteryInfoPrivate::health(int battery)
{

}

QBatteryInfo::LevelStatus QBatteryInfoPrivate::levelStatus()
{

}

QBatteryInfo::LevelStatus QBatteryInfoPrivate::levelStatus(int battery)
{

}

void QBatteryInfoPrivate::setBatteryIndex(int batteryIndex)
{

}

QT_END_NAMESPACE
