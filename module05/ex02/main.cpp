/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:42:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 16:04:55 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << "OVERLOAD" << std::endl;
	
	AForm *pardon = new PresidentialPardonForm();
	std::cout << *pardon << std::endl;
	
	AForm *tree = new ShrubberyCreationForm();
	std::cout << *tree << std::endl;

	AForm *robot = new RobotomyRequestForm();
	std::cout << *robot << std::endl;
		
	std::cout << std::endl;


	std::cout << "COPY CONSTRUCTORS" << std::endl;

	PresidentialPardonForm const castPPF = PresidentialPardonForm("Zome");
	PresidentialPardonForm pardonCpy = PresidentialPardonForm(castPPF);

	ShrubberyCreationForm const castSCF = ShrubberyCreationForm("MA");
	ShrubberyCreationForm treeCpy = ShrubberyCreationForm(castSCF);

	RobotomyRequestForm const castRRF = RobotomyRequestForm("Marvin");
	RobotomyRequestForm robotCpy = RobotomyRequestForm(castRRF);

	std::cout << pardonCpy;
	pardonCpy.action();
	std::cout << std::endl;
	
	std::cout << treeCpy;
	try
	{
		treeCpy.action();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
	
	std::cout << robotCpy;
	robotCpy.action();

	delete pardon;	
	delete tree;	
	delete robot;	
	return (0);
}
