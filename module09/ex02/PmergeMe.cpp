#include "PmergeMe.hpp"
#include <string.h>
#include <locale>

bool	invalidOutput(char **list)
{
	for (int i = 0; list[i] != NULL; i++)
	{
		for (int j = 0; list[i][j] != '\0'; j++)
			if (!isdigit(list[i][j]) || std::atoi(list[i]) < 0)
				return true;
	}
	return false;
}

clock_t	PmergeMe::parseList()
{
	clock_t t = std::clock();
	if (this->_listLength < 2)
	{
		this->_orderedList.push_back((std::atoi(_list[0])));
		return clock() - t;
	}
	for (int i = 0; i < this->_listLength; i += 2)
		this->_numberList.push_back(std::make_pair(std::atoi(_list[i]), std::atoi(_list[i + 1])));
	return clock() - t;
}

clock_t	PmergeMe::parseVector()
{
	clock_t t = std::clock();
	if (this->_listLength < 2)
	{
		this->_orderedVector.push_back((std::atoi(_list[0])));
		return clock() - t;
	}
	for (int i = 0; i < this->_listLength; i += 2)
		this->_numberVector.push_back(std::make_pair(std::atoi(_list[i]), std::atoi(_list[i + 1])));
	return clock() - t;
}

PmergeMe::PmergeMe(int listLength, char **list)
{
	if (invalidOutput(list))
	{
		std::cout << "Error\n";	
		exit(1);
	}
	this->_listLength = listLength - 1;
	this->_list = list;
	this->_addSpareNum = false;
	if (this->_listLength > 1 && this->_listLength % 2 != 0)// Odd list length
	{
		this->_addSpareNum = true;
		this->_spareNumber = std::atoi(_list[_listLength - 1]);
		this->_listLength--;
	}
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
	for (int i = 0; _list[i] != '\0'; i++)
		std::cout << this->_list[i] << " ";
	std::cout << std::endl;
}

void		swapPair(std::pair<int, int> &pair)
{
	int tmp = pair.first;
	pair.first = pair.second;
	pair.second = tmp;
}

clock_t		PmergeMe::sortList()
{
	clock_t t = std::clock();
	std::list< std::pair<int, int> >::iterator it;

	for (it = this->_numberList.begin(); it != this->_numberList.end(); it++)
		if (it->first < it->second)
			swapPair(*it);
	
	if (this->_numberVector.size() % 2 != 0)	
	{
		this->_numberList.push_front(std::make_pair(INT_MIN, INT_MIN));
		listRecursiveSort(this->_numberList, 0, this->_numberList.size());
		this->_numberList.pop_front();
	}
	else
		listRecursiveSort(this->_numberList, 0, this->_numberList.size());
    this->_orderedList = listInsertionSort(this->_numberList);
	if (this->_addSpareNum)
	{
		std::list<int>::iterator i;
		for (i = _orderedList.begin(); i != _orderedList.end(); i++)
		{
			if (this->_spareNumber < *i)
			{
				_orderedList.insert(i, _spareNumber);
				break;
			}
		}
	}
	return clock() - t;
}

clock_t		PmergeMe::sortVector()
{
	clock_t t = std::clock();
	for (unsigned int i = 0; i < this->_numberVector.size(); i++)
		if (this->_numberVector[i].first < this->_numberVector[i].second)
			swapPair(this->_numberVector[i]);
	if (this->_numberVector.size() % 2 != 0)	
	{
		this->_numberVector.push_back(std::make_pair(INT_MIN, INT_MIN));
		vectorRecursiveSort(this->_numberVector, 0, this->_numberVector.size());
		this->_numberVector.erase(this->_numberVector.begin());
	}
	else
		vectorRecursiveSort(this->_numberVector, 0, this->_numberVector.size());
    this->_orderedVector = vectorInsertionSort(this->_numberVector);
	if (this->_addSpareNum)
	{
		std::vector<int>::iterator i;
		for (i = _orderedVector.begin(); i != _orderedVector.end(); i++)
		{
			if (this->_spareNumber < *i)
			{
				_orderedVector.insert(i, _spareNumber);
				break;
			}
		}
	}
	return clock() - t;
}

void		PmergeMe::sort()
{
	if (this->_listLength < 2)
		return;
	this->_execTimeList += sortList();
	this->_execTimeVector += sortVector();
}

void		PmergeMe::printAfter()
{
	std::cout << "After:	";
	for (unsigned int i = 0; i < this->_orderedVector.size(); i++)
		std::cout << this->_orderedVector[i] << " ";
	std::cout << std::endl;
	std::cout << " Time to process a range of " << this->_listLength << 
		" elements with std::vector : " << this->_execTimeVector << "s\n";
	std::cout << " Time to process a range of " << this->_listLength << 
		" elements with std::list : " << this->_execTimeList << "s\n";
	std::cout << std::endl;
}

PmergeMe::~PmergeMe()
{}
