/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zome </var/spool/mail/zome>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:45:42 by zome              #+#    #+#             */
/*   Updated: 2021/08/24 10:00:58 by zome             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;	
	this->_value = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_value = rhs.getRawBits();
	return (*this);				// So we can nest operations (a = b = c)
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->_value = raw;
}
