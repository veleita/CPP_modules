/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:02:30 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 13:40:29 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationFormForm.hpp"

//------CONSTRUCTORS------//

ShrubberyCreationFormForm::ShrubberyCreationFormForm() :
	AForm("ShrubberyCreationFormForm", "default target", 145, 137)
{
}

ShrubberyCreationFormForm::ShrubberyCreationFormForm(std::string const target) :
	AForm("ShrubberyCreationFormForm", target, 145, 137)
{
}

ShrubberyCreationFormForm::ShrubberyCreationFormForm(const ShrubberyCreationFormForm &copy)
    : AForm(copy)
{
}


//------OPERATOR OVERLOADS------//

ShrubberyCreationFormForm	&ShrubberyCreationFormForm::operator=(ShrubberyCreationFormForm const &rhs)
{
	(void)rhs;

	return (*this);
}


//------GETTERS AND SETTERS------//



//------CLASS METHODS------//

void ShrubberyCreationFormForm::action() const
{
}


//------EXCEPTIONS------//



//------DESTRUCTORS------//

ShrubberyCreationFormForm::~ShrubberyCreationFormForm()
{
}
