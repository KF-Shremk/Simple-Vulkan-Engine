#include "sve_window.hpp"

namespace sve {

	SveWindow::SveWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name }
	{
		initWindow();
	}

	SveWindow::~SveWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void SveWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); //don't use OpenGL
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); //don't resize window after creation

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
} //sve namespace