#include "PmergeMe.hpp"

std::list<int>	parseList(int listLength, char **argv)
{
	for (int i = 1; i < listLength; i++)
		this->_numberList.push_back(std::atoi(argv[i]));
	return numberList;
}

std::vector<int>	parseVector(int listLength, char **argv)
{
	for (int i = 1; i < listLength; i++)
		this->_numberVector.push_back(std::atoi(argv[i]));
	return numberVector;
}

PmergeMe::PmergeMe(int listLength, char **list)
{
	this->_numberList = parseList(list);
	this->_numberVector = parseVector(list);
}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	*this = copy
}

PmergeMe	&PmergeMe::operator=(PmergeMe	const &rhs)
{
	this->_numberList = rhs._numberList;
	this->_numberVector = rhs._numberVector;
	return *this;
}

void		PmergeMe::printBefore()
{
}

void		PmergeMe::sort()
{
}

void		PmergeMe::printAfter()
{
}

PmergeMe::~PmergeMe()
{}
