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

#include <GLFW/glfw3.h>

#ifndef GLPS_GL_HANDLER
#define GLPS_GL_HANDLER

void GLPS_Clear_GL_Errors();
void GLPS_GL_Callback(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message, const void *userParam);
void GLPS_GLFW_Callback();
GLuint GLPS_Make_Shader(const char *source, GLenum type);
GLFWwindow *GLPS_GL_Init();

#endif