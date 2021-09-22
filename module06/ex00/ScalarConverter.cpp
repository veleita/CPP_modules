/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:18:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/22 18:29:15 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _input(42) 
{
}

ScalarConverter::ScalarConverter(std::string input) : _input(input)
{
}

ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
	*this = copy;
}


ScalarConverter & operator=(ScalarConverter const & rhs)
{
	this->_input = rhs.getInput();
}


void	ScalarConverter::getInput()
{
	return (this->_input);
}


void	ScalarConverter::Display()
{
	std::cout <<\
		"char:" << this->_charVal <<\
		"int:" << this->_intVal <<\
		"float:" << this->_floatVal <<\
		"double:" << this->_doubleVal <<\
		std::endl;
}


ScalarConverter::~ScalarConverter()
{
}
