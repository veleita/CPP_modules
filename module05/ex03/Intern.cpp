/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:33:01 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/06 17:12:12 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//------CONSTRUCTORS------//

Intern::Intern() 
{
	_formNames[0] = "shrubbery creation";
	_formNames[1] = "presidential pardon";
	_formNames[2] = "robotomy request";
	
	_formObjs[0] = &ShrubberyCreationForm::clone;
	_formObjs[1] = &PresidentiaPardonForm::clone;
	_formObjs[2] = &RobotomyRequestForm::clone;
}

Intern::Intern(Intern const &copy)
{
}


//------OPERATOR OVERLOADS------//

Intern const &Intern::operator=(Intern const &rhs)
{
	return (*this);
}


//------CLASS METHODS------//

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < NUM_FORMS; i++)
	{
		if (formNames[i] == formName)
			return (new formClasses[i]);
	}

	throw FormNotFoundException();
//	return (NULL);
}


//------EXCEPTIONS------//

const char *Intern::FormNotFoundException::what() const throw()
{
	return ("ERROR: form not found.");
}


//------DESTRUCTORS------//

Intern::~Intern()
{
	/*
	for (int i = 0; i < 3; i++)
	{
		delete _formCatalogue[i];
	}
*/
	std::cout << "Intern has been deleted" << std::endl;
}
