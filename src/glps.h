/*
    This is a physics simulator that uses OpenGL for hardware acceleration
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

#ifndef GLPS_H
#define GLPS_H

#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include <inttypes.h>
#include "input.h"

/*
#ifndef GLPS_MATTER_FILE
#define GLPS_MATTER_FILE 2
#endif

#ifndef GLPS_GENERAL_FILE
#define GLPS_GENERAL_FILE 1
#endif

#ifndef GLPS_DATA_FILE
#define GLPS_DATA_FILE 3
#endif

#ifndef GLPS_SCRIPT_FILE
#define GLPS_SCRIPT_FILE 4
#endif
*/

typedef struct
{
    GLFWwindow *window;
    GLPS_Input *input;
} GLPS_Controller;

typedef struct
{
    GLuint shader;
} GLPS_Shader;

typedef struct
{
    GLPS_Shader **shaders;
    GLuint program;
} GLPS_Calculation;

typedef struct
{
    char *name;
    double value;
} GLPS_Attribute;

typedef struct
{
    GLPS_Attribute **attributes;
} GLPS_Material;

typedef struct
{
    double x, y, z;
} GLPS_Vec3;

typedef struct
{
    GLPS_Vec3 *v1, v2, v3;
} GLPS_Vertex_Connection;

typedef struct
{
    GLPS_Vec3 p1, p2, p3;
    GLPS_Vertex_Connection c1_2, c2_3, c3_1;
} GLPS_Triangle;

typedef struct
{
    GLPS_Triangle **tri_array;
    size_t tri_count;
} GLPS_Structure;

GLPS_Controller *GLPS_Init();

#endif
