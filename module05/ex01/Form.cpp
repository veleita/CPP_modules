/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:58:58 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/05 17:35:33 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//------CONSTRUCTORS------//

Form::Form() : _name("Standard document"),
	_gradeRequiredToSign(150), _gradeRequiredToExec(150), _isSigned(false)
{
}

Form::Form(const std::string name, int gradeToSign, int gradeToExec) :
	_name(name),
	_gradeRequiredToSign(gradeToSign), _gradeRequiredToExec(gradeToExec),
	_isSigned(false)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &copy) :
	_name(copy.getName()),
	_gradeRequiredToSign(copy._gradeRequiredToSign),
	_gradeRequiredToExec(copy._gradeRequiredToExec),
	_isSigned(copy.getIsSigned())

{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Form	&Form::operator=(Form const & rhs)
{
	this->_isSigned = rhs.getIsSigned();

	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Form &rhs)
{
	return out << rhs.getName() << ":" << std::endl <<\
		"Is signed: " << rhs.getIsSigned() << std::endl <<\
		"Grade required to sign: " << rhs.getGradeToSign() << std::endl <<\
		"Grade required to execute: " << rhs.getGradeToExec() << std::endl;
}


//------GETTERS AND SETTERS------//

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeToSign() const
{
	return (this->_gradeRequiredToSign);
}

int Form::getGradeToExec() const
{
	return (this->_gradeRequiredToExec);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}


//------CLASS METHODS------//

void	Form::beSigned(Bureaucrat const *bureaucrat)
{
	if (this->_isSigned == false)
	{
		if (bureaucrat->getGrade() > this->_gradeRequiredToSign)
		{
			throw Form::GradeTooLowException();
		}
		else
			this->_isSigned = true;
	}
	else
		throw Form::AlreadySignedException();
}


//------EXCEPTIONS------//

const char *Form::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high, it must be a positive number");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("the form requires a higher grade");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("this form has already been signed.");
}

//------DESTRUCTORS------//

Form::~Form()
{
}
