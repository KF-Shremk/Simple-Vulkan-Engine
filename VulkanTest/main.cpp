#include "first_app.hpp"

int main()
{
	sve::FirstApp app{};

	try {
		app.run();
	} catch (const std::exception &e) 
	{ }
}