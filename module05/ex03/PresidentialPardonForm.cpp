/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:05:45 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/06 17:13:10 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//------CONSTRUCTORS------//

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", "random dude", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	AForm("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
    : AForm(copy)
{
}


//------OPERATOR OVERLOADS------//

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;

	return (*this);
}


//------CLASS METHODS------//

void PresidentialPardonForm::_action() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		std::cout << executor.getName() << " has requested the president's pardon." << std::endl;
		this->_action();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}	
}

AForm	*PresidentialPardonForm::clone(std::string target) const
{
	PresidentialPardonForm *clone = new PresidentialPardonForm(target);
	return (clone);
}


//------DESTRUCTORS------//

PresidentialPardonForm::~PresidentialPardonForm()
{
}
