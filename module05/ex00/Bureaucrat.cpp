/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:25:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/20 12:52:12 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//------CONSTRUCTORS------//

Bureaucrat::Bureaucrat() : _name("Norman"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :
	_name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();

	return (*this);
}


//------GETTERS AND SETTERS------//

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}


//------CLASS METHODS------//

void	Bureaucrat::incrementGrade()
{
	this->_grade++;
}

void	Bureaucrat::decrementGrade()
{
	this->_grade--;
}


//------EXCEPTIONS------//

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high, the maximum is 150");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR: Grade too low, must be greater than 0");
}


//------DESTRUCTORS------//

Bureaucrat::~Bureaucrat()
{
}
