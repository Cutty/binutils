/* Macro definitions for Intel 386 running under LynxOS.
   Copyright 1993 Free Software Foundation, Inc.

This file is part of GDB.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

#ifndef TM_I386LYNX_H
#define TM_I386LYNX_H

/* Override number of expected traps from sysv. */
#define START_INFERIOR_TRAPS_EXPECTED 2

/* Most definitions from sysv could be used. */
#include "i386/tm-i386v.h"

#undef SAVED_PC_AFTER_CALL

#define SAVED_PC_AFTER_CALL i386lynx_saved_pc_after_call
CORE_ADDR i386lynx_saved_pc_after_call ();

#include "coff-solib.h"		/* COFF shared library support */

#endif /* TM_I386LYNX_H */
