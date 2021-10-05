/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:25:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/05 17:33:30 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//------CONSTRUCTORS------//

Bureaucrat::Bureaucrat() : _name("Norman"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();

	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &rhs)
{
	return out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
}


//------GETTERS AND SETTERS------//

std::string const Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}


//------CLASS METHODS------//

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooHighException();
	else
		this->_grade++;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooLowException();
	else
		this->_grade--;
}

void	Bureaucrat::signForm(Form &doc) const
{
    std::string reason;

    try
	{
		doc.beSigned(this);
        std::cout << this->_name << " signs " << \
                     doc.getName() << std::endl;
		return;
	}
	catch (const Form::GradeTooLowException& e)
	{
        reason = e.what();
	}
	catch (const Form::AlreadySignedException& e)
	{
        reason = e.what();
	}
	
	std::cout << this->_name << " couldn't sign " << doc.getName()\
	  << " because " << reason << std::endl;
}


//------EXCEPTIONS------//

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR: Grade too low, the minimum is 150");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high, must be a positive number");
}


//------DESTRUCTORS------//

Bureaucrat::~Bureaucrat()
{
}
