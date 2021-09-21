/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:05:19 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 15:17:33 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//------CONSTRUCTORS------//

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RobotomyRequestForm", "default target", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	AForm("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy)
{
}


//------OPERATOR OVERLOADS------//

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;

	return (*this);
}


//------GETTERS AND SETTERS------//



//------CLASS METHODS------//

void RobotomyRequestForm::action() const
{
}


//------EXCEPTIONS------//



//------DESTRUCTORS------//

RobotomyRequestForm::~RobotomyRequestForm()
{
}
