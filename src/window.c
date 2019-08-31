#include "window.h"
#include <stdio.h>
#include <stdlib.h>

struct GAZOZwindow
{
    GLFWwindow *glfw_window;
};

GAZOZwindow *GAZOZ_create_window(int width, int height, const char *title)
{
    GAZOZwindow *window = malloc(sizeof(*window));
    window->glfw_window = glfwCreateWindow(width, height, title, NULL, NULL);
    return window;
}

void GAZOZ_free_window(GAZOZwindow *window)
{
    glfwDestroyWindow(window->glfw_window);
    free(window);
}

