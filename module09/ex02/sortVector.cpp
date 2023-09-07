#include "sortVector.hpp"

std::vector<int> vectorInsertionSort(std::vector< std::pair<int, int> >& initialVector)
{
	std::vector<int> finalVector(1, initialVector[0].second);
	finalVector.push_back(initialVector[0].first);
	bool push_second;

	for ( unsigned int i = 1; i < initialVector.size() ; i++)
	{
		push_second = false;
		for (unsigned int j = 0; j < finalVector.size(); j++)
		{
			std::vector<int>::iterator it = std::next(finalVector.begin(), j);
			if (initialVector[i].second < finalVector[j])
			{
				finalVector.insert(it, initialVector[i].second);
				break;
			}
			else if (std::next(it, 1) == finalVector.end())
				push_second = true;
		}
		if (push_second)
			finalVector.push_back(initialVector[i].second);
		finalVector.push_back(initialVector[i].first);
	}
	return finalVector;
}

void	vectorMergeSort(std::vector< std::pair<int, int> >& vector, int begin_idx, int middle_idx, int end_idx)
{
    
	std::vector< std::pair<int, int> > left(std::next(vector.begin(), begin_idx), std::next(vector.begin(), middle_idx));
	std::vector< std::pair<int, int> > right(std::next(vector.begin(), middle_idx), std::next(vector.begin(), end_idx));
    
	for (int i = begin_idx; i < end_idx; i++) {
        if (left.size() > 0 && (right.size() == 0 || right.front().first > left.front().first))
		{
            *std::next(vector.begin(), i) = left.front();
            left.erase(left.begin());
        }
		else
		{
            *std::next(vector.begin(), i) = right.front();
            right.erase(right.begin());
        }
    }
}

void	vectorRecursiveSort(std::vector< std::pair<int, int> > &vector, int begin_idx, int end_idx)
{
    if (end_idx - begin_idx > 1)
	{
		int middle_idx = (end_idx + begin_idx) / 2;
		
		vectorRecursiveSort(vector, begin_idx, middle_idx);	// divide left
        vectorRecursiveSort(vector, middle_idx, end_idx);	// divide right
        vectorMergeSort(vector, begin_idx, middle_idx, end_idx);
    }
}
