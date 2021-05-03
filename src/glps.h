#ifndef GLPS_H
#define GLPS_H

#include <GL/gl.h>
#include <inttypes.h>

#ifndef GLPS_MATTER_FILE
#define GLPS_MATTER_FILE 2
#endif

#ifndef GLPS_GENERAL_FILE
#define GLPS_GENERAL_FILE 1
#endif

#ifndef GLPS_DATA_FILE
#define GLPS_DATA_FILE 3
#endif

#ifndef GLPS_SCRIPT_FILE
#define GLPS_SCRIPT_FILE 4
#endif

typedef struct
{
	GLuint shader;
} GLPS_Shader;

typedef struct
{
	GLPS_Shader **shaders;
	GLuint program;
} GLPS_Calculation;

typedef struct
{
	char *name;
	double value;
} GLPS_Attribute;

typedef struct
{
	GLPS_Attribute **attributes;
} GLPS_Material;

#endif
