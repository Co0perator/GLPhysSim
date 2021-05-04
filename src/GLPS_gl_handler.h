#ifndef GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_NONE
#endif

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <GL/gl.h>

#ifndef GLPS_GL_HANDLER
#define GLPS_GL_HANDLER

void GLPS_Clear_GL_Errors();
void GLPS_GL_Callback();
GLuint GLPS_Make_Shader();

#endif