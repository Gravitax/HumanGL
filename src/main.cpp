#include <GL/glew.h>
#include "Utilities.h"
#include "Window.hpp"
#include "Skeleton.hpp"
#include "Loop.hpp"
#include "Matrix.hpp"

using namespace std;

int		main( void )
{
	if (!Window::init())
		return (0);

	if (glewInit() != GLEW_OK)
	{
		std::cerr <<  "Failed to initialize GLEW\n" << std::endl;
		return 0;
	}
	// need to set gl parameters
	glEnable(GL_DEPTH_TEST);

	Skeleton::init();

	// draw
	Loop::loop();

	Window::ExitAndCleanup();

	return 1;
}
