/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:05:45 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 19:06:07 by mzomeno-         ###   ########.fr       */
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

AForm	*PresidentialPardonForm::clone(std::string target) const
{
	PresidentialPardonForm *clone = new PresidentialPardonForm(target);
	return (clone);
}

void PresidentialPardonForm::_action() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (canExecute(executor))
		this->_action();
}


//------DESTRUCTORS------//

PresidentialPardonForm::~PresidentialPardonForm()
{
}
