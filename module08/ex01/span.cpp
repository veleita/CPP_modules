/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:12:52 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/30 13:30:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


//------CONSTRUCTORS------//

Span::Span() : _N(42)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(Span	const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Span	&Span::operator=(Span	const &rhs)
{
	this->_N = rhs.getN();
	this->_numbers = rhs.getNumbers();

	return (*this);
}


//------GETTERS------//

std::multiset<int>	Span::getNumbers() const
{
	return (this->_numbers);
}

unsigned int	Span::getN() const
{
	return (this->_N);
}


//------ERROR HANDLING------//

bool	Span::onlyOneNumber() const
{
	if (this->_numbers.size() == 1)
	{
		throw std::logic_error("There is only one number.");
		return true;
	}
	else
		return false;
}

//------MEMBER FUNCTIONS------//

void	Span::addNumber(int num)
{
	if (this->_numbers.size() == this->_N)
	{
		throw std::out_of_range("Can't store any more numbers.");
	}
	else
	{
		this->_numbers.insert(num);
	}
}
/*
template <typename Iterator>
void	Span::addNumber(Iterator begin, Iterator end)
{
}
*/
unsigned int	Span::shortestSpan() const
{
	if (onlyOneNumber() == false)
	{
		unsigned int shortestSpan = UINT_MAX;
		std::multiset<int>::iterator it = this->_numbers.begin();
		std::multiset<int>::iterator prev = it;
		while (it != this->_numbers.end())
		{
			std::advance(it, 1);
			shortestSpan = std::min(shortestSpan, 
					static_cast<unsigned int>(*it - *prev));
			prev = it;
		}
		return shortestSpan;
	}
	else
		return -1;
}

unsigned int	Span::longestSpan() const
{
	if (onlyOneNumber() == false)
		return (*(this->_numbers.rbegin()) - *(this->_numbers.begin()));
	else
		return -1;
}

//------DESTRUCTORS------//

Span::~Span()
{
}
