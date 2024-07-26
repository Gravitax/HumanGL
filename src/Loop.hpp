#ifndef LOOP_CLASS_H
# define LOOP_CLASS_H
#include <glfw3.h>

class Loop {
public:
	static void loop();
private:
	static void processInput();
	static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
	static bool shouldStop;
	static double frameTime;
	const static double refreshingRate;
};

#endif
