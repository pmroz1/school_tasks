#include "myLib.h"
#include <iostream>

class convert
{
public:
	
	static int16 run_conversion()
	{
		/**
		* \brief pounds in one kilogram
		*/
		static auto kg_to_lb = 2.2046;

		double input_of_kilos;
		std::cout << "\n<< Kg= lb/2.2046 >>" << std::endl;
		std::cout << "Value of kilos to convert: ";
		std::cin >> input_of_kilos;

		const auto return_value = input_of_kilos * kg_to_lb;
		std::cout << "\nAfter conversion: " << return_value << std::endl;

		return r_success;
	}
};

auto main() -> int
{
	convert::run_conversion();
	return r_success;
}

