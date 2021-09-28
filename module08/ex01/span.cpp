/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:12:52 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/28 18:09:12 by mzomeno-         ###   ########.fr       */
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

Span::Span(Spa	&copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Span	Span::&operator=(Span	const &rhs)
{
	this->_N = rhs.getN();
	this->_numbers = rhs.getNumbers();
}


//------GETTERS------//

std::multiset	Span::getNumbers() const
{
	return (this->_numbers);
}

unsigned int	Span::getN() const
{
	return (this->_N);
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

void	Span::addNumber(Iterator begin, Iterator end)
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

//------DESTRUCTORS------//

Span::~Span()
{
}
