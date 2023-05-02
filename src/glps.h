/*
    This is a physics simulator that uses OpenGL for hardware acceleration
    Copyright (C) 2023  Miles Potter

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

#ifndef GLEW_INCL
#include <GL/glew.h>
#define GLEW_INCL
#endif

#ifndef GLPS_H
#define GLPS_H

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

class GLPS_Controller
{
protected:
    GLFWwindow *window;
    GLPS_Input_Handler &input_handler;

public:
    GLPS_Controller();
    GLFWwindow *getWindow();
    GLPS_Input_Handler getInputHandler();
};

class Shader
{
    GLuint shader;
};

class GL_Calculation
{
    Shader **shaders;
    GLuint program;
};

class GLPS_Attribute
{
    char *name;
    double value;
};

class GLPS_Material
{
    GLPS_Attribute attributes[];
};

class Vec3
{
    double x, y, z;
};

class GVertex_Connection
{
    Vec3 v1, v2, v3;
};

class Triangle
{
    Vec3 p1, p2, p3;
    Vertex_Connection c1_2, c2_3, c3_1;
};

class Structure
{
    Triangle tri_array[];
    size_t tri_count;
};

// GLPS_Controller *GLPS_Init();

#endif
