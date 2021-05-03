#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "glps.h"
#include <stdio.h>
#include <GL/gl.h>
#include <string.h>

#ifndef DebugCall(f)
#define DebugCall(f)
#endif

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
	return;
}

GLuint GLPS_Make_Shader(const char *source, GLenum type)
{
	return glCreateShaderProgram(type, 1, &source);
}
