/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:58:58 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 16:39:58 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//------CONSTRUCTORS------//

AForm::AForm() : _name("Standard document"), _target("default target"),
	_gradeRequiredToSign(150), _gradeRequiredToExec(150), _isSigned(false)
{
}

AForm::AForm(const std::string name, const std::string target,
		int gradeToSign, int gradeToExec) :
	_name(name), _target(target),
	_gradeRequiredToSign(gradeToSign), _gradeRequiredToExec(gradeToExec),
	_isSigned(false)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &copy) :
	_name(copy.getName()), _target(copy.getTarget()),
	_gradeRequiredToSign(copy._gradeRequiredToSign),
	_gradeRequiredToExec(copy._gradeRequiredToExec),
	_isSigned(copy.getIsSigned())

{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

AForm	&AForm::operator=(AForm const & rhs)
{
	this->_isSigned = rhs.getIsSigned();

	return (*this);
}

std::ostream& operator<<(std::ostream& out, const AForm &rhs)
{
	return out << rhs.getName() << ":" << std::endl <<\
		"Target: " << rhs.getTarget() << std::endl <<\
		"Is signed: " << rhs.getIsSigned() << std::endl <<\
		"Grade required to sign: " << rhs.getGradeToSign() << std::endl <<\
		"Grade required to execute: " << rhs.getGradeToExec() << std::endl;
}


//------GETTERS AND SETTERS------//

std::string AForm::getName() const
{
	return (this->_name);
}

std::string AForm::getTarget() const
{
	return (this->_target);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeRequiredToSign);
}

int AForm::getGradeToExec() const
{
	return (this->_gradeRequiredToExec);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}


//------CLASS METHODS------//

void	AForm::beSigned(Bureaucrat const *bureaucrat)
{
	if (this->_isSigned == false)
	{
		if (bureaucrat->getGrade() > this->_gradeRequiredToSign)
			throw GradeTooHighException();
		else
			this->_isSigned = true;
	}
}

bool	AForm::canExecute(Bureaucrat const &executor) const
{
	if (this->_isSigned == false)
	{
		throw FormNotSignedException();
		return false;
	}	
	else if (executor.getGrade() > this->_gradeRequiredToExec)
	{
		throw GradeTooHighException();
		return false;
	}
	else
		return true;
}

//------EXCEPTIONS------//

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("ERROR: Grade too low, must be greater than 0.");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("ERROR: The form is not signed.");
}


//------DESTRUCTORS------//

AForm::~AForm()
{
}
