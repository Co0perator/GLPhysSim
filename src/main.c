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
    GLPS_Controller controller = GLPS_Controller();
    time_t start, stop;
    while (!glfwWindowShouldClose(controller.getWindow()))
    {
        time(&start);
        Render_Frame(controller);
        GLPS_Collect_Input(controller.getInputHandler());

        time(&stop);
        printf("%f\n", difftime(stop, start));
        printf("%c\n", controller.getInputHandler().a);
        printf("%c\n", controller.getInputHandler().b);
    }

    glfwDestroyWindow(controller.getWindow());
    glfwTerminate();
    return 0;
}
