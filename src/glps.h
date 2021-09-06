#ifndef GLPS_H
#define GLPS_H

#include <GLFW/glfw3.h>
#include <inttypes.h>

/*
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
*/

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

typedef struct
{
	double x, y, z;
} GLPS_Vec3;

typedef struct
{
	GLPS_Vec3 *v1, v2, v3;
} GLPS_Vertex_Connection;

typedef struct
{
	GLPS_Vec3 p1, p2, p3;
	GLPS_Vertex_Connection c1_2, c2_3, c3_1;
} GLPS_Triangle;

typedef struct
{
	GLPS_Triangle **tri_array;
	size_t tri_count;
} GLPS_Structure;

#endif
