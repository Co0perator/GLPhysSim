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

#include <GL/glew.h>

#include <stdio.h>
#include <string.h>
#include "glps.h"
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include "gl_handler.h"
#include "input.h"
#include <time.h>

int main(int argc, char *argv[])
{
    GLPS_Controller *controller = GLPS_Init();
    time_t start, stop;
    while (!glfwWindowShouldClose(controller->window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(controller->window);
        time(&start);
        GLPS_Collect_Input(controller->input);
        time(&stop);
        printf("%f\n", difftime(stop, start));
        printf("%c\n", controller->input->a);
        printf("%c\n", controller->input->b);
    }

    glfwDestroyWindow(controller->window);
    glfwTerminate();
    return 0;
}
