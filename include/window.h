#ifndef GAZOZ_WINDOW_H
#define GAZOZ_WINDOW_H

#include "common.h"
#include <GLFW/glfw3.h>

typedef struct GAZOZwindow GAZOZwindow;
GAZOZwindow *GAZOZ_create_window(int width, int height, const char *title);
void GAZOZ_free_window(GAZOZwindow *window);

#endif //GAZOZ_WINDOW_H
