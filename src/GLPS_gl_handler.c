#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "glps.h"
#include <stdio.h>
#include <string.h>
#include "GLPS_gl_handler.h"

void GLPS_Clear_GL_Errors()
{
	/*
	GLuint status;
	while(1)
	{	
		GLchar *msg_buf = (GLchar *)alloca(1000);
		status = glGetDebugMessageLog(1, 1000, NULL, NULL, NULL, NULL, NULL, msg_buf);
		if (status != 0) 
		{
			printf("%s\n",(const char*)msg_buf);
			free(msg_buf);
		}
		else
		{
			return;
		}
	}
	*/
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

GLFWwindow *GLPS_Init()
{
}
