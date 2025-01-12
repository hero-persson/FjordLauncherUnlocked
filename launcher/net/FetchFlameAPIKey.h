// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PolyMC - Minecraft Launcher
 *  Copyright (C) 2022 Lenny McLennington <lenny@sneed.church>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef FETCHFLAMEAPIKEY_H
#define FETCHFLAMEAPIKEY_H

#include <tasks/Task.h>
#include <QNetworkReply>
#include <QObject>

class FetchFlameAPIKey : public Task {
    Q_OBJECT
   public:
    explicit FetchFlameAPIKey();

    QString m_result;

   public slots:
    void downloadFinished();

   protected:
    virtual void executeTask();

    std::shared_ptr<QNetworkReply> m_reply;
};

#endif  // FETCHFLAMEAPIKEY_H
