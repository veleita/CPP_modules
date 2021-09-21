/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:33:01 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 18:53:02 by mzomeno-         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
	{
		this->_formCatalogue[i] = rhs._formCatalogue[i];
	}

	return (*this);
}


//------CLASS METHODS------//

void	Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_formCatalogue[i]->getType() == type)
			return this->_formCatalogue[i]->clone();
	}
}

AMateria	*Intern::createMateria(std::string const & type)
{
		if (this->_formCatalogue[i] == NULL)
			break ;
	}

	return (NULL);
}


//------DESTRUCTORS------//

Intern::~Intern()
{
	for (int i = 0; i < 4; i++)
	{
		delete _formCatalogue[i];
	}

	std::cout << "Intern has been deleted" << std::endl;
}
