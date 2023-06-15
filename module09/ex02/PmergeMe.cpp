#include "PmergeMe.hpp"

clock_t	PmergeMe::parseList(char **argv)
{
	clock_t t = std::clock();
	for (int i = 0; i < this->_listLength; i++)
		this->_numberList.push_back(std::atoi(argv[i]));
	return clock() - t;
}

clock_t	PmergeMe::parseVector(char **argv)
{
	clock_t t = std::clock();
	for (int i = 0; i < this->_listLength; i++)
		this->_numberVector.push_back(std::atoi(argv[i]));
	return clock() - t;
}

PmergeMe::PmergeMe(int listLength, char **list)
{
	this->_listLength = listLength - 1;
	this->_execTimeList = parseList(list);
	this->_execTimeVector = parseVector(list);
}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}

PmergeMe	&PmergeMe::operator=(PmergeMe	const &rhs)
{
	this->_numberList = rhs._numberList;
	this->_numberVector = rhs._numberVector;
	return *this;
}

void		PmergeMe::printBefore()
{
	std::cout << "Before:	";
	for (int i = 0; i < this->_listLength; i++)
		std::cout << this->_numberVector[i] << " ";
	std::cout << std::endl;
}

void		PmergeMe::sort()
{
}

void		PmergeMe::printAfter()
{
}

PmergeMe::~PmergeMe()
{}
