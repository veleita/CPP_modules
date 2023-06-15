#include "PmergeMe.hpp"

clock_t	PmergeMe::parseList()
{
	clock_t t = std::clock();
	for (int i = 0; i < this->_listLength; i += 2)
		this->_numberList.push_back(std::make_pair(std::atoi(_list[i]), std::atoi(_list[i + 1])));
	return clock() - t;
}

clock_t	PmergeMe::parseVector()
{
	clock_t t = std::clock();
	for (int i = 0; i < this->_listLength; i += 2)
		this->_numberVector.push_back(std::make_pair(std::atoi(_list[i]), std::atoi(_list[i + 1])));
	return clock() - t;
}

PmergeMe::PmergeMe(int listLength, char **list)
{
	this->_listLength = listLength - 1;
	this->_list = list;
	this->_execTimeList = parseList();
	this->_execTimeVector = parseVector();
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
		std::cout << this->_list[i] << " ";
	std::cout << std::endl;
}

void		swapList(std::list<int>::iterator it1, std::list<int>::iterator it2)
{
	int tmp = *it1;
	*it1 = *it2;
	 *it2 = tmp;
}

clock_t		PmergeMe::sortList()
{
	clock_t t = std::clock();

/*	
	std::list<int>::iterator it;
	std::list<int> largerElements;
	
	// Sort every pair and fill list with the larger elements
	for (it = this->_numberList.begin(); it != this->_numberList.end(); std::advance(it, 2))
		if (*it > *(std::next(it, 1)))
			swapList(it, std::next(it, 1));
		largerElements.push_back(*it);

	// Sort the first elements of the pairs
	for (it = this->_numberList.begin(); it != this->_numberList.end(); std::advance(it, 2))
*/
	return clock() - t;
}

clock_t		PmergeMe::sortVector()
{
	clock_t t = std::clock();
	return clock() - t;
}

void		PmergeMe::sort()
{
	this->_execTimeList += sortList();
	this->_execTimeVector += sortVector();
}

void		PmergeMe::printAfter()
{
}

PmergeMe::~PmergeMe()
{}
