#include "glps.h"
#include "gl_handler.h"
#include "input.h"
#include <stdlib.h>

GLPS_Controller *GLPS_Init()
{
    GLPS_Controller *controller = (GLPS_Controller *)malloc(sizeof(GLPS_Controller));
    controller->window = GLPS_GL_Init();
    controller->input = GLPS_Input_Init(controller->window);
    return controller;
}