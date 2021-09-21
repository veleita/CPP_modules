/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:05:19 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 15:39:22 by mzomeno-         ###   ########.fr       */
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


//------CLASS METHODS------//

void RobotomyRequestForm::action() const
{
	srand (time(NULL));
	int randomizer = rand() % 100;

	if (randomizer >= 50)
	{
		std::cout << "* BZZZzzz shhHFFFF bop bip bip ....BEEEEP BFHRRKS!!$&# *"\
			<< std::endl;
		
		std::cout << this->_target << "has been robotomized successfully"\
			<< std::endl;
	}
	else
		std::cout << "Robotomy has been a failure" << std::endl;
}


//------DESTRUCTORS------//

RobotomyRequestForm::~RobotomyRequestForm()
{
}
