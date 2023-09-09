#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <vector>
# include <ctime>
# include <iostream>
# include <cstdlib>

# include "sortList.hpp"
# include "sortVector.hpp"

class PmergeMe
{
	private:
		char **_list;
		int	_spareNumber;
		bool _addSpareNum;
		std::list< std::pair<int, int> > 		_numberList;
		std::vector< std::pair<int, int> >		_numberVector;
		std::list<int> 							_orderedList;
		std::vector<int>						_orderedVector;

		int					_listLength;
		clock_t				_execTimeList;
		clock_t				_execTimeVector;

	public:
		PmergeMe();
		PmergeMe(int listLength, char **argv);
		PmergeMe(PmergeMe const &copy);
		PmergeMe	&operator=(PmergeMe	const &rhs);

		clock_t		parseList();
		clock_t		parseVector();
		clock_t		sortList();
		clock_t		sortVector();
		void		printBefore();
		void		sort();
		void		printAfter();
		~PmergeMe();
};

#endif
