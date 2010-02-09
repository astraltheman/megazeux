/* MegaZeux
 *
 * Copyright (C) 2008 Alistair John Strachan <alistair@devzero.co.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __EDIT_STUBS_H
#define __EDIT_STUBS_H

#include "compat.h"

__M_BEGIN_DECLS

#include "world_struct.h"

extern const bool editor_present;

void init_macros(World *mzx_world);
void free_extended_macros(World *mzx_world);

void edit_world(World *mzx_world);

__M_END_DECLS

#endif // __EDIT_STUBS_H
