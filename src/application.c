#include "application.h"
#include "common.h"


struct GAZOZapplication
{
    GAZOZwindow *window;
};

GAZOZ_API void GAZOZ_init()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


}