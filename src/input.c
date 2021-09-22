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
#ifndef GLEW_INCL
#include <GL/glew.h>
#define GLEW_INCL
#endif

#include "input.h"
#include "GLFW/glfw3.h"
#include <stdlib.h>

GLPS_Input *GLPS_Input_Init(GLFWwindow *window)
{
    GLPS_Input *input = (GLPS_Input *)malloc(sizeof(GLPS_Input));
    input->window = window;

    GLPS_Collect_Input(input);
    return input;
}

void GLPS_Collect_Input(GLPS_Input *input)
{
    input->a = glfwGetKey(input->window, GLFW_KEY_A);
    input->b = glfwGetKey(input->window, GLFW_KEY_B);
    input->c = glfwGetKey(input->window, GLFW_KEY_C);
    input->d = glfwGetKey(input->window, GLFW_KEY_D);
    input->e = glfwGetKey(input->window, GLFW_KEY_E);
    input->f = glfwGetKey(input->window, GLFW_KEY_F);
    input->g = glfwGetKey(input->window, GLFW_KEY_G);
    input->h = glfwGetKey(input->window, GLFW_KEY_H);
    input->i = glfwGetKey(input->window, GLFW_KEY_I);
    input->j = glfwGetKey(input->window, GLFW_KEY_J);
    input->k = glfwGetKey(input->window, GLFW_KEY_K);
    input->l = glfwGetKey(input->window, GLFW_KEY_L);
    input->m = glfwGetKey(input->window, GLFW_KEY_M);
    input->n = glfwGetKey(input->window, GLFW_KEY_N);
    input->o = glfwGetKey(input->window, GLFW_KEY_O);
    input->p = glfwGetKey(input->window, GLFW_KEY_P);
    input->q = glfwGetKey(input->window, GLFW_KEY_Q);
    input->r = glfwGetKey(input->window, GLFW_KEY_R);
    input->s = glfwGetKey(input->window, GLFW_KEY_S);
    input->t = glfwGetKey(input->window, GLFW_KEY_T);
    input->u = glfwGetKey(input->window, GLFW_KEY_U);
    input->v = glfwGetKey(input->window, GLFW_KEY_V);
    input->w = glfwGetKey(input->window, GLFW_KEY_W);
    input->x = glfwGetKey(input->window, GLFW_KEY_X);
    input->y = glfwGetKey(input->window, GLFW_KEY_Y);
    input->z = glfwGetKey(input->window, GLFW_KEY_Z);
    input->shift = glfwGetKey(input->window, GLFW_KEY_LEFT_SHIFT) | glfwGetKey(input->window, GLFW_KEY_RIGHT_SHIFT);
    input->ctrl = glfwGetKey(input->window, GLFW_KEY_LEFT_CONTROL) | glfwGetKey(input->window, GLFW_KEY_RIGHT_CONTROL);

    glfwGetCursorPos(input->window, &(input->xpos), &(input->ypos));

    input->mouse_left = glfwGetMouseButton(input->window, GLFW_MOUSE_BUTTON_LEFT);
    input->mouse_right = glfwGetMouseButton(input->window, GLFW_MOUSE_BUTTON_RIGHT);

    glfwPollEvents();
}