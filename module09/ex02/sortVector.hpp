#ifndef SORTVECTOR_HPP
# define SORTVECTOR_HPP

# include <vector>

std::vector<int>	vectorInsertionSort(std::vector< std::pair<int, int> >& initialvector);
void	vectorMergeSort(std::vector< std::pair<int, int> >& vector, int begin_idx, int middle_idx, int end_idx);
void	vectorRecursiveSort(std::vector< std::pair<int, int> > &vector, int begin_idx, int end_idx);

#endif
