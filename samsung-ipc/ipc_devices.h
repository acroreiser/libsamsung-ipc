/*
 * This file is part of libsamsung-ipc.
 *
 * Copyright (C) 2012-2014 Paul Kocialkowski <contact@paulk.fr>
 *
 * libsamsung-ipc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * libsamsung-ipc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libsamsung-ipc.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <samsung-ipc.h>

#include "devices/crespo/crespo_ipc.h"
#include "devices/aries/aries_ipc.h"
#include "devices/galaxys2/galaxys2_ipc.h"
#include "devices/maguro/maguro_ipc.h"
#include "devices/piranha/piranha_ipc.h"
#include "devices/i9300/i9300_ipc.h"
#include "devices/n7100/n7100_ipc.h"

#ifndef __IPC_DEVICES_H__
#define __IPC_DEVICES_H__

struct ipc_device_desc {
    char *name;
    char *board_name;
    char *kernel_version;

    struct ipc_ops *fmt_ops;
    struct ipc_ops *rfs_ops;
    struct ipc_handlers *handlers;
    struct ipc_gprs_specs *gprs_specs;
    struct ipc_nv_data_specs *nv_data_specs;
};

extern struct ipc_device_desc ipc_devices[];
extern int ipc_devices_count;

#endif

// vim:ts=4:sw=4:expandtab
