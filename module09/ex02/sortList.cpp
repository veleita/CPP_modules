#include "sortList.hpp"
#include <iostream>

std::list<int>	listInsertionSort(std::list< std::pair<int, int> >& initialList)
{
	std::list< std::pair<int, int> >::iterator i	= initialList.begin();
	std::list<int> finalList(1, i->second);
	finalList.push_back(i->first);
	i++;
	bool push_second;

	for ( ; i != initialList.end() ; i++)
	{
		push_second = false;
		for (std::list<int>::iterator j = finalList.begin() ; j != finalList.cend(); j++)
		{
			if (i->second < *j)
			{
				finalList.insert(j, i->second);
				break;
			}
			else if (std::next(j, 1) == finalList.end())
				push_second = true;
		}
		if (push_second)
			finalList.push_back(i->second);
		finalList.push_back(i->first);
	}
	return finalList;
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

void	listRecursiveSort(std::list< std::pair<int, int> > &list, int begin_idx, int end_idx)
{
    if (end_idx - begin_idx > 1)
	{
		int middle_idx = begin_idx + ((end_idx - begin_idx) / 2);
        
		listRecursiveSort(list, begin_idx, middle_idx);	// divide left
        listRecursiveSort(list, middle_idx, end_idx);	// divide right
        listMergeSort(list, begin_idx, middle_idx, end_idx);
    }
}
