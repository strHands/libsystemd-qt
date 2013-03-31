/***************************************************************************
 * Copyright (c) 2013 Andrea Scarpino <andrea@archlinux.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 ***************************************************************************/

#ifndef SD_MANAGER_H
#define SD_MANAGER_H

#include <QStringList>

#include "QtSystemd-export.h"

/**
 * This class allows querying the underlying system.
 *
 * It is the unique entry point for systemd.
 *
 * Note that it is implemented as a singleton
 */
namespace Systemd {

    SDQT_EXPORT bool enableUnitFiles(const QStringList &files, bool runtime, bool force);

    SDQT_EXPORT bool disableUnitFiles(const QStringList &files, bool runtime);
}

#endif
