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

#include <GLFW/glfw3.h>
#include "glps.h"
#include <stdio.h>
#include <string.h>
#include "gl_handler.h"
#include <stdlib.h>

void GLPS_Clear_GL_Errors()
{

	GLuint status;
	while (1)
	{
		GLchar *msg_buf = (GLchar *)malloc(1000);
		status = glGetDebugMessageLog(1, 1000, NULL, NULL, NULL, NULL, NULL, msg_buf);
		if (status != 0)
		{
			printf("%s\n", (const char *)msg_buf);
			free(msg_buf);
		}
		else
		{
			return;
		}
	}
}

void GLPS_GL_Callback(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message, const void *userParam)
{
	switch (severity)
	{
	case GL_DEBUG_SEVERITY_HIGH:
		printf("GL ERROR:");
		break;
	case GL_DEBUG_SEVERITY_MEDIUM:
		printf("GL WARNING:");
		break;
	case GL_DEBUG_SEVERITY_LOW:
		printf("GL Warning:");
		break;
	case GL_DEBUG_SEVERITY_NOTIFICATION:
		printf("GL Notification:");
		break;
	}
	printf("\n\tSource: ");
	switch (source)
	{
	case GL_DEBUG_SOURCE_API:
		printf("API");
		break;
	case GL_DEBUG_SOURCE_WINDOW_SYSTEM:
		printf("Window System");
		break;
	case GL_DEBUG_SOURCE_SHADER_COMPILER:
		printf("Shader Compiler");
		break;
	case GL_DEBUG_SOURCE_THIRD_PARTY:
		printf("Third Party");
		break;
	case GL_DEBUG_SOURCE_APPLICATION:
		printf("Application");
		break;
	case GL_DEBUG_SOURCE_OTHER:
		printf("Other");
		break;
	}
	printf("\n\tType: ");
	switch (type)
	{
	case GL_DEBUG_TYPE_ERROR:
		printf("Error");
		break;
	case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR:
		printf("Deprecated Behavior");
		break;
	case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:
		printf("Undefined Behavior");
		break;
	case GL_DEBUG_TYPE_PORTABILITY:
		printf("Portability");
		break;
	case GL_DEBUG_TYPE_PERFORMANCE:
		printf("Performance");
		break;
	case GL_DEBUG_TYPE_MARKER:
		printf("Marker");
		break;
	case GL_DEBUG_TYPE_PUSH_GROUP:
		printf("Push Group");
		break;
	case GL_DEBUG_TYPE_POP_GROUP:
		printf("Pop Group");
		break;
	case GL_DEBUG_TYPE_OTHER:
		printf("Other");
		break;
	}
	printf("\n\tID: %u\n\tMessage: %s\n", id, message);
}

GLuint GLPS_Make_Shader(const char *source, GLenum type)
{
	return glCreateShaderProgramv(type, 1, &source);
}

GLFWwindow *GLPS_GL_Init()
{

	GLenum glfw_init = glfwInit();

	if (glfw_init != GLFW_TRUE)
	{
		printf("GLFW failed to init\n");
		exit(0);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	GLFWwindow *window = glfwCreateWindow(640, 480, "GLPhysSim", NULL, NULL);
	if (!window)
	{
		printf("Unable to create window!\n");
		glfwTerminate();
		exit(0);
	}

	glfwMakeContextCurrent(window);
	printf("GL Version: %s\n", glGetString(GL_VERSION));

	GLenum err = glewInit();
	if (err != GLEW_OK)
	{
		printf("GLEW failed to init\n");
		printf("Error: %s\n", glewGetErrorString(err));
		glfwTerminate();
		exit(0);
	}

	glDebugMessageCallback(GLPS_GL_Callback, NULL);

	return window;
}

void Render_Frame(GLPS_Controller controller)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(controller.getWindow());
}