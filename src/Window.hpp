#ifndef WINDOW_CLASS_H
# define WINDOW_CLASS_H

#include "Utilities.h"
#include <glfw3.h>

class Window {
public:
	static int init();
	static void ExitAndCleanup();
	//~Window(void);
	static GLFWwindow* getWindow();
private:
	static bool initialized;
	static GLFWwindow* window;
};

#endif
