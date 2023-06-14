#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <vector>
# include <iostream>

class PmergeMe
{
	private:
		std::list _numberList;
		std::vector _numberVector;

	public:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe	&operator=(PmergeMe	const &rhs);
		~PmergeMe();
};

#endif
