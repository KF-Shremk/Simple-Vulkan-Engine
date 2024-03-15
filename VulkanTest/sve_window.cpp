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

	//checks for events on whether the window should close
	bool SveWindow::shouldClose()
	{
		return glfwWindowShouldClose(window);
	}

	//initializes the window using GLFW functions
	void SveWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); //don't use OpenGL
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); //don't resize window after creation

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
} //sve namespace