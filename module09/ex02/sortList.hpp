#ifndef SORTLIST_HPP
# define SORTLIST_HPP

# include <list>

void	swapPair(std::pair<int, int> &pair);
void 	listInsertionSort(std::list< std::pair<int, int> >& initialList);
void	listMergeSort(std::list< std::pair<int, int> >& list, int begin_idx, int middle_idx, int end_idx);
void	listRecursiveSort(std::list< std::pair<int, int> > &list, int begin_idx, int end_idx);

#endif
