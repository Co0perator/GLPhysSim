/*
    this is a C implementation of the MAIDL specification
    Copyright (C) 2021  Miles Potter

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef MAIDL
#define MAIDL
#include <inttypes.h>

#ifndef MAIDL_SHAPE
#define MAIDL_SHAPE 0x0001
#endif

#ifndef MAIDL_COLOR
#define MAIDL_COLOR 0x0002
#endif

#ifndef MAIDL_MAT_STATE
#define MAIDL_MAT_STATE 0x0003
#endif

typedef struct
{
    uint64_t hash;
    void *pointer;
} HashPointer;

typedef struct
{

} Annotion;

typedef struct
{
    uint64_t hash;
    HashPointer **func_hash_map;

} Material;

#endif