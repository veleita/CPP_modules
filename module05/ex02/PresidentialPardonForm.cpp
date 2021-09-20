/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:05:45 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/20 18:22:34 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//------CONSTRUCTORS------//

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", "default target", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	Form("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
    : Form(copy)
{
}


//------OPERATOR OVERLOADS------//

Form	&Form::operator=(Form const & rhs)
{
	(void)rhs;

	return (*this);
}


//------CLASS METHODS------//

void PresidentialPardonForm::action() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}


//------DESTRUCTORS------//

~PresidentialPardonForm::~PresidentialPardonForm()
{
}
