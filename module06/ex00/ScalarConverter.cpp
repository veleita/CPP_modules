/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr> (                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:18:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 18:08:04 by mzomeno-         ###   ########.fr       */
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

	this->_displayTypes[0] = &ScalarConverter::_displayChar;
	this->_displayTypes[1] = 	&ScalarConverter::_displayInt;
	this->_displayTypes[2] = 	&ScalarConverter::_displayFloat;
	this->_displayTypes[3] = 	&ScalarConverter::_displayDouble;
}

ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
	this->_displayTypes[0] = &ScalarConverter::_displayChar;
	this->_displayTypes[1] = 	&ScalarConverter::_displayInt;
	this->_displayTypes[2] = 	&ScalarConverter::_displayFloat;
	this->_displayTypes[3] = 	&ScalarConverter::_displayDouble;

	*this = copy;
}


//------OPERATOR OVERLOADS------//

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	this->_input = rhs.getInput();

	return (*this);
}


//------GETTERS AND SETTERS------//

std::string	ScalarConverter::getInput() const
{
	return (this->_input);
}

void		ScalarConverter::setInput(std::string input)
{
	this->_input = input;
}


//------CLASS METHODS------//

void	ScalarConverter::_displayChar()
{
	std::cout << "char: ";

	try
	{
		this->_charVal = static_cast <int> (std::stoi(this->_input));
	}
	catch(std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable" << std::endl;
		return;
	}

	if (isprint(_charVal))
		std::cout << "'" << static_cast <char> (_charVal) << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	ScalarConverter::_displayInt()
{
	std::cout << "int: ";
	
	try
	{
		this->_intVal = static_cast <int> (std::stoi(this->_input));
		std::cout << this->_intVal;
	}
	catch(std::invalid_argument&)
	{
		std::cout << "impossible";
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void	ScalarConverter::_displayFloat()
{
	std::cout << "float: ";
	
	try
	{
		this->_floatVal = static_cast <float> (std::stof(this->_input));
		std::cout << this->_floatVal;
		if (this->_floatVal == static_cast <int> (this->_floatVal))
			std::cout << ".0";
		std::cout << "f";
	}
	catch(std::invalid_argument&)
	{
		std::cout << "impossible";
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void	ScalarConverter::_displayDouble()
{
	std::cout << "double: ";
	
	try
	{
		this->_doubleVal = static_cast <double> (std::stod(this->_input));
		std::cout << this->_doubleVal;

		if (this->_doubleVal == static_cast <int> (this->_doubleVal))
			std::cout << ".0";
	}
	catch(std::invalid_argument&)
	{
		std::cout << "impossible";
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
}


void	ScalarConverter::display()
{
	for (int i = 0; i < NUM_TYPES; i++)
		(this->*_displayTypes[i])();
}


//------DESTRUCTOR------//

ScalarConverter::~ScalarConverter()
{
}
