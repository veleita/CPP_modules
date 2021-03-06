/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zome </var/spool/mail/zome>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:45:42 by zome              #+#    #+#             */
/*   Updated: 2021/09/05 13:36:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//------CONSTRUCTORS------//

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
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);				// So we can nest operations (a = b = c)
}

std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs)
{
	return (lhs << rhs.toFloat());
}


//------COMPARISON OPERATORS------//

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs.getRawBits());
}


//------ARITHMETIC OPERATORS------//

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	result(*this);

	result.setRawBits(this->_value + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed	result(*this);

	result.setRawBits(this->_value - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{	
	Fixed	result(*this);

	result.setRawBits(((long)this->_value * (long)rhs.getRawBits()) >> Fixed::_bits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed	result(*this);

	result.setRawBits(((long)this->_value << Fixed::_bits) / (long)rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator++()	// Pre-increment
{
	this->_value += (1 << Fixed::_bits);
	return (*this);
}

Fixed	Fixed::operator--()	// Pre-decrement
{
	this->_value -= (1 << Fixed::_bits);
	return (*this);
}

Fixed	Fixed::operator++(int)	// Post-increment
{
	Fixed pre_state(*this);
	this->_value += (1 << Fixed::_bits);
	return (pre_state);
}

Fixed	Fixed::operator--(int)	// Post-decrement
{
	Fixed pre_state(*this);
	this->_value -= (1 << Fixed::_bits);
	return (pre_state);
}


//------MIN AND MAX FUNCTIONS------//

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	&max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}


//------GETTER AND SETTER------//

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


//------TYPE CAST------//

int	Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}		// We are reversing the conversion we made in the int constructor

float	Fixed::toFloat(void) const
{
		return ((float)this->_value / (float)(1 << Fixed::_bits));
}		// We are reversing the conversion we made in the float constructor


//------DESTRUCTOR------//

Fixed::~Fixed()
{
}
