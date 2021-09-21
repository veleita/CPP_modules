/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:33:01 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 19:08:19 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//------CONSTRUCTORS------//

Intern::Intern()
{
	this->_formCatalogue[0] = new ShrubberyCreationForm();
	this->_formCatalogue[1] = new RobotomyRequestForm();
	this->_formCatalogue[2] = new PresidentialPardonForm();
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Intern const &Intern::operator=(Intern const &rhs)
{
	for (int i = 0; i < 3; i++)
	{
		this->_formCatalogue[i] = rhs._formCatalogue[i];
	}

	return (*this);
}


//------CLASS METHODS------//

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_formCatalogue[i]->getName() == formName)
			return this->_formCatalogue[i]->clone(target);
	}

	return (NULL);
}


//------DESTRUCTORS------//

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
	{
		delete _formCatalogue[i];
	}

	std::cout << "Intern has been deleted" << std::endl;
}
