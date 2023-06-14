#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error\n";
		return 1;
	}
	rpn	calculator;
	try {
		calculator.ProcessOperation(argv[1]);
   } catch (const std::exception& e) {
	   std::cout << e.what() << std::endl;
	   return 1;
   }
	return 0;
}
