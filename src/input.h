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

#ifndef INPUT_H
#define INPUT_H
#include <GLFW/glfw3.h>

class GLPS_Input_Handler
{
public:
    GLFWwindow *window;
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, shift, ctrl;
    double xpos, ypos;
    int mouse_left, mouse_right;

    GLPS_Input_Handler(GLFWwindow *window);
    void GLPS_Collect_Input();
};

// GLPS_Input *GLPS_Input_Init(GLFWwindow *window);

#endif