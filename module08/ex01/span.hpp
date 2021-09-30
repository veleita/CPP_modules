/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:11:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/30 13:28:22 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <climits>

class Span
{
	private:

		std::multiset<int>	_numbers;
		unsigned int		_N;

	public:

		Span();
		Span(unsigned int N);
		Span(Span const &copy);

		Span	&operator=(Span	const &rhs);

		std::multiset<int>	getNumbers() const;
		unsigned int		getN() const;

		void		addNumber(int num);
		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			int avaiableSpace = this->_N - this->_numbers.size();
			if (avaiableSpace < std::distance(begin, end))
			{
				throw std::out_of_range("Can't store that many numbers.");
			}
			else
			{
				this->_numbers.insert(begin, end);
			}
		};

		bool			onlyOneNumber() const;	
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		

		~Span();
};

#endif
