#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace sve {

	class SveWindow {

	public:
		SveWindow(int w, int h, std::string name);
		~SveWindow();
		 
	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;

	};
}