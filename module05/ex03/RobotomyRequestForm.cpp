/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:05:19 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/07 12:54:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//------CONSTRUCTORS------//

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("robotomy request", "default", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	AForm("robotomy request", target, 72, 45)
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

void RobotomyRequestForm::_action() const
{
	srand (time(NULL));
	int randomizer = rand() % 2;

	if (randomizer == 1)
	{
		std::cout << "* BZZZzzz shhHFFFF bop bip bip ....BEEEEP BFHRRKS!!$&# *"\
			<< std::endl;
		
		std::cout << this->getTarget() << " has been robotomized successfully"\
			<< std::endl;
	}
	else
		std::cout << "Robotomy has been a failure" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		std::cout << executor.getName() << " tries the robotomy." << std::endl;
		this->_action();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}	
}

AForm	*RobotomyRequestForm::clone(std::string target) const
{
	RobotomyRequestForm *clone = new RobotomyRequestForm(target);
	return (clone);
}


//------DESTRUCTORS------//

RobotomyRequestForm::~RobotomyRequestForm()
{
}
