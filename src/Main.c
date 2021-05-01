#include <stdio.h>
#include <string.h>
#include "glps.h"

void main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Too Few Arguments. Exiting.\n");
		return;	
	}
	for (int i = 1; i < argc; i++)
	{
		
		const char* filename = argv[i];
		int length = strlen(filename), filetype = 0;
		if (length < 6)
		{
			printf("Invalid argument \"");
			printf(filename);
			printf("\". Exiting.\n");
		}
		const char* file_end = filename + length - 5;
		if (strcmp(file_end, "mttr") == 0)
		{
			filetype = GLPS_MATTER_FILE;
		} else if (strcmp(file_end, "glps") == 0)
		{
			filetype = GLPS_GENERAL_FILE;
		} else
		{
			printf("Invalid argument \"");
			printf(filename);
			printf("\". Exiting.\n");
		}
	}
}
