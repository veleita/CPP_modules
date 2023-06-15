#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <vector>
# include <ctime>
# include <iostream>
# include <cstdlib>

class PmergeMe
{
	private:
		std::list<int> 		_numberList;
		std::vector<int>	_numberVector;
		int					_listLength;
		clock_t				_execTimeList;
		clock_t				_execTimeVector;

	public:
		PmergeMe(int listLength, char **argv);
		PmergeMe(PmergeMe const &copy);
		PmergeMe	&operator=(PmergeMe	const &rhs);

		clock_t		parseList(char **argv);
		clock_t		parseVector(char **argv);
		void		printBefore();
		void		sort();
		void		printAfter();
		~PmergeMe();
};

#endif
