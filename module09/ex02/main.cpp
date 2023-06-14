#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";	
	}
	PmergeMe	sorter(numberList);
	sorter.printBefore();
	sorter.sort();
	sorter.printAfter();
	return 0;
}
