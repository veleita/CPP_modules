#include "RPN.hpp"
#include <string.h> // strcmp
#include <string> // string

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";
		return 1;
	}
	std::string input;
	if (argc > 2)
	{
		for (int i = 1; i < argc; i++)
		{
			if (is_number(argv[i]) || strcmp(argv[i], "+") || strcmp(argv[i], "-") 
					|| strcmp(argv[i], "*") || strcmp(argv[i], "/"))
				input.append(" " + std::string(argv[i]));
			else
			{
				std::cout << "Error\n";
				return 1;
			}
		}
	}
	else
		input = argv[1];
	RPN	calculator;
	try {
		calculator.ProcessOperation(input);
   } catch (const std::exception& e) {
	   std::cout << "Error: " << e.what() << std::endl;
	   return 1;
   }
	return 0;
}
