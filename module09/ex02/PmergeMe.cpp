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

void	mergeSort(std::list< std::pair<int, int> > list, int begin_idx, int middle_idx, int end_idx)
{
    int left_it = end_idx - middle_idx;
    int right_it = middle_idx - begin_idx + 1;

    int[] LA = Arrays.copyOfRange(A, p, q +1);
    int[] RA = Arrays.copyOfRange(A, q+1, r +1);
    int RIDX = 0;
    int LIDX = 0;
    for (int i = p; i < r - p + 1; i++) {
        if (RIDX == n2) {
            A[i] = LA[LIDX];
            LIDX++;
        } else if (LIDX == n1) {
            A[i] = RA[RIDX];
            RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
            A[i] = LA[LIDX];
            LIDX++;
        } else {
            A[i] = RA[RIDX];
            RIDX++;
        }
    }
}

void	sort(std::list< std::pair<int, int> > list, int begin_idx, int end_idx)
{
	int middle_idx = (end_idx - begin_idx) / 2
    if (end_idx - begin_idx > 2)
	{
        sort(list, begin_idx, middle_idx);
        sort(list, middle_idx + 1, end_idx);
        mergeSort(list, begin_idx, middle_idx, end_idx);
    }
	else
	{
        insertionSort(A, p, r);
    }
}

clock_t		PmergeMe::sortList()
{
	clock_t t = std::clock();
	std::list< std::pair<int, int> >::iterator it;

	for (it = this->_numberList.begin(); it != this->_numberList.end(); it++)
		if (it->first > it->second)
			swapPair(*it);
	
	for (it = this->_numberList.begin(); it != this->_numberList.end(); it++)
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
