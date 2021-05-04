/*#ifndef GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_NONE
#endif*/

#include <GL/glew.h>
#include <stdio.h>
#include <string.h>
#include "glps.h"
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include "GLPS_gl_handler.h"

int main(int argc, char *argv[])
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
	/*
	if (argc < 2)
	{
		printf("Too Few Arguments. Exiting.\n");
		return;
	}
	for (int i = 1; i < argc; i++)
	{

		const char *filename = argv[i];
		int length = strlen(filename), filetype = 0;
		if (length < 6)
		{
			printf("Invalid argument");
			printf("%s", filename);
			printf("\". Exiting.\n");
		}
		const char *file_end = filename + length - 5;
		if (strcmp(file_end, "mttr") == 0)
		{
			filetype = GLPS_MATTER_FILE;
		}
		else if (strcmp(file_end, "glps") == 0)
		{
			filetype = GLPS_GENERAL_FILE;
		}
		else
		{
			printf("Invalid argument \"");
			printf("%s", filename);
			printf("\". Exiting.\n");
		}
	}*/
	while (!glfwWindowShouldClose(window))
	{
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
