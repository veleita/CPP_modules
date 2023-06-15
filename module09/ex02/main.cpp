#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";	
		return 1;
	}
	PmergeMe	sorter(argc, ++argv);
	sorter.printBefore();
	sorter.sort();
	sorter.printAfter();
	return 0;
}
