#include "myLib.h"
#include <iostream>


class convert
{
public:
	
	static void f_message()
	{
		std::cout << "\n<< Kg= lb/2.2046 >>" << std::endl;
		std::cout << "Value of kilos to convert: ";
	}

	static void show(const double str)
	{
		/*std::cout << str;*/
		std::cout << "\nAfter conversion: " << str << std::endl;
	}

	static int16 run_conversion(double kg_to_lb)
	{
		/**
		* \brief pounds in one kilogram
		*/
		
		f_message();
		
		double input_of_kilos;
		std::cin >> input_of_kilos;
		const auto return_value = input_of_kilos * kg_to_lb;
		show(return_value);
		

		return r_success;
	}
};

auto main() -> int
{
	static auto kg_to_lb = 2.2046;
	convert::run_conversion(kg_to_lb);
	return r_success;
}
