
#include <iostream>

class object
{
public:
	static const double lb;

	static void run()
	{
		double input;
		std::cout << "\nEnter value to convert: ";
		std::cin >> input;
		const auto result = input * lb;
		std::cout << "\nresult: " << result << std::endl;
	}
};

const double object::lb = 2.2049;

auto main() -> int
{
	object::run();
	return 0;
}
