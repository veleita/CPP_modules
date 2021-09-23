/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:18:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 13:18:48 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


//------CONSTRUCTORS------//

ScalarConverter::ScalarConverter() 
{
}

ScalarConverter::ScalarConverter(std::string input)
{
	this->_input = input;

	this->_typeIdentifiers = {
		&ScalarConverter::isChar, 
		&ScalarConverter::isInt, 
		&ScalarConverter::isFloat, 
		&ScalarConverter::isDouble
	};
}

ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

ScalarConverter & operator=(ScalarConverter const & rhs)
{
	this->_input = rhs.getInput();
}


//------GETTERS AND SETTERS------//

void	ScalarConverter::getInput()
{
	return (this->_input);
}

void	ScalarConverter::setInput(std::string input)
{
	this->_input = input;
}

//------CLASS METHODS------//

bool	ScalarConverter::_isChar() const
{
}

bool	ScalarConverter::_isInt() const
{
}

bool	ScalarConverter::_isFloat() const
{
}

bool	ScalarConverter::_isDouble() const
{
}

int		ScalarConverter::_detectDataType()
{
	for (int i = 0; i < NUM_TYPES; i++)
	{
		if (this->_typeIdentifiers[i] == true)
			return (i);
	}

	throw UnknownTypeException();
}

char	ScalarConverter::_getChar()
{
}

int		ScalarConverter::_getInt()
{
}

float	ScalarConverter::_getFloat()
{
}

double	ScalarConverter::_getDouble()
{
}

void	ScalarConverter::makeConversions()
{
	this->_typeID = detectDataType();

	this->_charVal = getChar();
	this->_intVal = getInt();
	this->_floatVal = getFloat();
	this->_doubleVal = getDouble();
}

void	ScalarConverter::display()
{
	std::cout <<\
		"char:" << this->_charVal <<\
		"int:" << this->_intVal <<\
		"float:" << this->_floatVal <<\
		"double:" << this->_doubleVal <<\
		std::endl;
}



//------EXCEPTIONS------//

const char *ScalarConverter::UnknownTypeException::what() const throw()
{
	return ("ERROR: Unknown type.");
}


//------DESTRUCTOR------//

ScalarConverter::~ScalarConverter()
{
}
