/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2004,2007,2009  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

/* We need to include config-util.h.in for HAVE_*.  */
#ifndef __STDC_VERSION__
#define __STDC_VERSION__ 0
#endif
#include <config-util.h>

/* On x86 these functions aren't really needed. Save some space.  */
#if !defined (__i386__) && !defined (__x86_64__)
# ifdef HAVE___ASHRDI3
void EXPORT_FUNC (__ashrdi3) (void);
# endif
# ifdef HAVE___LSHRDI3
void EXPORT_FUNC (__lshrdi3) (void);
# endif
#endif

#if defined (__arm__)
void EXPORT_FUNC (__aeabi_lasr) (void);
void EXPORT_FUNC (__aeabi_llsl) (void);
void EXPORT_FUNC (__aeabi_llsr) (void);
void EXPORT_FUNC (__aeabi_ulcmp) (void);
#endif
