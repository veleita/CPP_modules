#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <vector>
# include <ctime>
# include <iostream>
# include <cstdlib>

# include "sortList.hpp"

class PmergeMe
{
	private:
		char **_list;
		std::list< std::pair<int, int> > 		_numberList;
		std::vector< std::pair<int, int> >	_numberVector;

		int					_listLength;
		clock_t				_execTimeList;
		clock_t				_execTimeVector;

	public:
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
