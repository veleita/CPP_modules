#include "sortList.hpp"


void		swapPair(std::pair<int, int> &pair)
{
	int tmp = pair.first;
	pair.first = pair.second;
	pair.second = tmp;
}

void listInsertionSort(std::list< std::pair<int, int> >& initialList)
{
	std::list< std::pair<int, int> >::iterator i	= initialList.begin();
	std::list<int> finalList(1, i->second);

	for ( ; i != initialList.end() ; i++)
	{
		std::list<int>::iterator j = finalList.begin();
		for ( ; j != finalList.end(); j++)
		{
			if (i->second < *j)
			{
				finalList.insert(j, i->second);
				break;
			}
		}
		finalList.push_back(i->first);
	}
	
	/*
    for (int i = begin_idx; i < end_idx; i++)
	{
        // Get the value at index (i+1)
        int current_value = *std::next(list.begin(), i + 1);
        int j = i + 1;
        // Shift elements to the right to make space for the current element
        while (*std::next(A.begin(), j - 1) > tempVal) {
            *std::next(A.begin(), j) = *std::next(A.begin(), j - 1);
            j--;
        }
        // Insert the current element at its correct position
        *std::next(A.begin(), j) = tempVal;
  }
  */
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
