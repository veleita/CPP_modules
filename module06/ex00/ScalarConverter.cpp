/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:18:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 15:13:09 by mzomeno-         ###   ########.fr       */
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

	_typeCasts = {
		&ScalarConverter::_displayChar,
		&ScalarConverter::_displayInt,
		&ScalarConverter::_displayFloat,
		&ScalarConverter::_displayDouble
	};
}

ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
	_displayTypes = {
		&ScalarConverter::_displayChar,
		&ScalarConverter::_displayInt,
		&ScalarConverter::_displayFloat,
		&ScalarConverter::_displayDouble
	};

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

bool	ScalarConverter::_displayChar() const
{
	std::cout << "char: ";

	if (this->_input.length() == 1 && isalpha(_input[0]))
		std::cout << _input[0];
}

bool	ScalarConverter::_displayInt() const
{
	std::cout << "int: ";
}

bool	ScalarConverter::_displayFloat() const
{
	std::cout << "float: ";
}

bool	ScalarConverter::_displayDouble() const
{
	std::cout << "double: ";
}


void	ScalarConverter::display()
{
	for (int i = 0; i < NUM_TYPES; i++)
	{
		std::cout << _dataTypes[i];
		if (_typeCats[i] == true)
			std::cout << _values[i];
		else
			std::cout << "impossible";
		std::cout << std::endl;
	}
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
