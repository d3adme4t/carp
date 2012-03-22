/*
 * carp_sysfs.c -- sysfs interface to carp module
 *
 * Copyright (c) 2012 Damien Churchill <damoxc@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/export.h>
#include <linux/sysfs.h>
#include <net/net_namespace.h>
#include <net/netns/generic.h>
#include "carp.h"

/*
 * Initialise sysfs. This sets up the carpctl file in /sys/class/net.
 */
int carp_create_sysfs(struct carp_net *cn)
{
    return 0;
}

void carp_destroy_sysfs(struct carp_net *cn)
{
}

/*
 * Initialise sysfs for each carp. This sets up and registers
 * the 'carpctl' directory for each individual carp under /sys/class/net.
 */
void carp_prepare_sysfs_group(struct carp *carp)
{
    //carp->dev->sysfs_groups[0] = &carp_group;
}
