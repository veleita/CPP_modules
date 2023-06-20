#include "sortList.hpp"

std::list<int>	listInsertionSort(std::list< std::pair<int, int> >& initialList)
{
	std::list< std::pair<int, int> >::iterator i	= initialList.begin();
	std::list<int> finalList(1, i->second);

	for ( ; i != initialList.end() ; i++)
	{
		for (std::list<int>::iterator j = finalList.begin() ; j != finalList.end(); j++)
		{
			if (i->second < *j)
			{
				finalList.insert(j, i->second);
				break;
			}
		}
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
