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

#ifndef MAIDL_UNITS
#define MAIDL_UNITS

#ifndef MAIDL_UNITS_LENGTH
#define MAIDL_UNITS_LENGTH 0x0100

#ifndef ML_PL
#define ML_PL 0x0101 // Planck Length
#endif

#ifndef ML_YM
#define ML_YM 0x0102 // Yoctometer
#endif

#ifndef ML_PM
#define ML_PM 0x0103 // Picometer
#endif

#ifndef ML_NM
#define ML_NM 0x0104 // Nanometer
#endif

#ifndef ML_UM
#define ML_UM 0x0105 // Micrometer
#endif

#ifndef ML_MM
#define ML_MM 0x0106 // Millimeter
#endif

#ifndef ML_CM
#define ML_CM 0x0107 // Centimeter -> default
#endif

#ifndef ML_M
#define ML_M 0x0108 // Meter
#endif

#ifndef ML_KM
#define ML_KM 0x0109 // Kilometer
#endif

#ifndef ML_AU
#define ML_AU 0x0109 // Astronomical Unit
#endif

#ifndef ML_LY
#define ML_LY 0x010A // Light Year
#endif

#endif
/*************************************************************************************************/
#ifndef MAIDL_UNITS_TEMP
#define MAIDL_UNITS_TEMP 0x0200

#ifndef MT_F
#define MT_F 0x0201 // Fahrenheit
#endif

#ifndef MT_C
#define MT_C 0x0202 // Celsius
#endif

#ifndef MT_K
#define MT_K 0x0203 // Kelvin
#endif

#endif
/*************************************************************************************************/

#endif