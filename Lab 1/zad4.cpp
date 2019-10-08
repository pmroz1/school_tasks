#include <iostream>

class stale_matematyczne
{
public:
	static double lb;
};

double stale_matematyczne::lb = 2.204;

auto main() -> int
{
	double input;
	std::cout << "\nEnter value to convert: ";
	std::cin >> input;
	const auto result = input * stale_matematyczne::lb;
	std::cout << "\nresult: " << result << std::endl;
	return 0;
}
