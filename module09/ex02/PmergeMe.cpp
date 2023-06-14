#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

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

PmergeMe::~PmergeMe()
{}
