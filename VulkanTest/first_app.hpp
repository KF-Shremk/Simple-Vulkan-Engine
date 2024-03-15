#pragma once

#include "sve_window.hpp"

namespace sve {

	class FirstApp
	{

	public:
		static constexpr int HEIGHT = 540;
		static constexpr int WIDTH = 960;

		void run();
	private:
		SveWindow SveWindow{WIDTH, HEIGHT, "hello vulkan!"};
	};
}