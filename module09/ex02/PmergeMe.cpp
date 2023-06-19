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

void		swapPair(std::pair<int, int> &pair)
{
	int tmp = pair.first;
	pair.first = pair.second;
	pair.second = tmp;
}

void	listMergeSort(std::list< std::pair<int, int> >& list, int begin_idx, int middle_idx, int end_idx)
{
    
	std::list< std::pair<int, int> > left(std::next(list.begin(), begin_idx), std::next(list.begin(), middle_idx));
	std::list< std::pair<int, int> > right(std::next(list.begin(), middle_idx), std::next(list.begin(), end_idx));
    
	for (int i = begin_idx; i < end_idx; i++) {
        if (left.size() > 0 && (right.size() == 0 || right.front().first > left.front().first))
		{
            *std::next(list.begin(), i) = left.front();
            left.pop_front();
        }
		else
		{
            *std::next(list.begin(), i) = right.front();
            right.pop_front();
        }
    }
}

void	listSort(std::list< std::pair<int, int> > &list, int begin_idx, int end_idx)
{
    if (end_idx - begin_idx > 1)
	{
		int middle_idx = begin_idx + ((end_idx - begin_idx) / 2);
        
		listSort(list, begin_idx, middle_idx);	// divide left
        listSort(list, middle_idx, end_idx);	// divide right
        listMergeSort(list, begin_idx, middle_idx, end_idx);
    }
	/*
	else
	{
        insertionSort(A, p, r);
    }
	*/
}

clock_t		PmergeMe::sortList()
{
	clock_t t = std::clock();
	std::list< std::pair<int, int> >::iterator it;

	for (it = this->_numberList.begin(); it != this->_numberList.end(); it++)
		if (it->first > it->second)
			swapPair(*it);
	
	listSort(this->_numberList, 0, this->_numberList.size());
/*	
	std::list<int> largerElements;
	
	// Sort every pair and fill list with the larger elements
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
