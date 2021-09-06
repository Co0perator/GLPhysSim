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
	GLFWwindow *window = GLPS_Init();

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
