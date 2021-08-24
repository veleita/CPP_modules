/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zome </var/spool/mail/zome>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:45:42 by zome              #+#    #+#             */
/*   Updated: 2021/08/24 13:39:30 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : _value(value << Fixed::_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << Fixed::_bits)))
{					// This operation is basically a right shift
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;	
	*this = copy;
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

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs->getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
}

bool	Fixed::operator==(Fixed const &rhs) const
{
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}		// We are reversing the conversion we made in the int constructor

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}		// We are reversing the conversion we made in the float constructor

std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs)
{
	return (lhs << rhs.toFloat());
}
