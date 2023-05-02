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

#include "input.h"
#include "GLFW/glfw3.h"
#include <stdlib.h>

GLPS_Input_Handler::GLPS_Input_Handler(GLFWwindow *window)
{
    this->window = window;
    this->GLPS_Collect_Input();
}

void GLPS_Input_Handler::GLPS_Collect_Input()
{
    a = glfwGetKey(window, GLFW_KEY_A);
    b = glfwGetKey(window, GLFW_KEY_B);
    c = glfwGetKey(window, GLFW_KEY_C);
    d = glfwGetKey(window, GLFW_KEY_D);
    e = glfwGetKey(window, GLFW_KEY_E);
    f = glfwGetKey(window, GLFW_KEY_F);
    g = glfwGetKey(window, GLFW_KEY_G);
    h = glfwGetKey(window, GLFW_KEY_H);
    i = glfwGetKey(window, GLFW_KEY_I);
    j = glfwGetKey(window, GLFW_KEY_J);
    k = glfwGetKey(window, GLFW_KEY_K);
    l = glfwGetKey(window, GLFW_KEY_L);
    m = glfwGetKey(window, GLFW_KEY_M);
    n = glfwGetKey(window, GLFW_KEY_N);
    o = glfwGetKey(window, GLFW_KEY_O);
    p = glfwGetKey(window, GLFW_KEY_P);
    q = glfwGetKey(window, GLFW_KEY_Q);
    r = glfwGetKey(window, GLFW_KEY_R);
    s = glfwGetKey(window, GLFW_KEY_S);
    t = glfwGetKey(window, GLFW_KEY_T);
    u = glfwGetKey(window, GLFW_KEY_U);
    v = glfwGetKey(window, GLFW_KEY_V);
    w = glfwGetKey(window, GLFW_KEY_W);
    x = glfwGetKey(window, GLFW_KEY_X);
    y = glfwGetKey(window, GLFW_KEY_Y);
    z = glfwGetKey(window, GLFW_KEY_Z);
    shift = glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) | glfwGetKey(window, GLFW_KEY_RIGHT_SHIFT);
    ctrl = glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) | glfwGetKey(window, GLFW_KEY_RIGHT_CONTROL);

    glfwGetCursorPos(window, &(xpos), &(ypos));

    mouse_left = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT);
    mouse_right = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT);

    glfwPollEvents();
}