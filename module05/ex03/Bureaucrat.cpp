/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:25:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 17:15:04 by mzomeno-         ###   ########.fr       */
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
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
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
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();

	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &rhs)
{
	return out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
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
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
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

void	Bureaucrat::signForm(AForm &doc) const
{
    std::string reason;

    if (doc.getIsSigned() == true)
    {
        reason = "it's already been signed";
    }
    else if (doc.getGradeToSign() < this->_grade)
    {
        reason = this->_name + "doesn't match the required grade";
    }
    else
    {
        std::cout << this->_name << " signs " << \
                     doc.getName() << std::endl;
        doc.beSigned(this);
        return ;
    }
    std::cout << this->_name << " cannot sign " << \
                 doc.getName() << " because " << \
                 reason << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	if (form.canExecute(*this))
	{
		std::cout << this->_name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
}

//------EXCEPTIONS------//

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR: Grade too high, the maximum is 150.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR: Grade too low, must be greater than 0.");
}


//------DESTRUCTORS------//

Bureaucrat::~Bureaucrat()
{
}
