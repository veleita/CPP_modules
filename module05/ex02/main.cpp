/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:42:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 17:14:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << "OVERLOAD" << std::endl;
	
	AForm *pardon = new PresidentialPardonForm("Zome");
	std::cout << *pardon << std::endl;
	
	AForm *tree = new ShrubberyCreationForm("MA");
	std::cout << *tree << std::endl;

	AForm *robot = new RobotomyRequestForm("Marvin");
	std::cout << *robot << std::endl;
		
	std::cout << std::endl;


	std::cout << "COPY CONSTRUCTORS" << std::endl;

	PresidentialPardonForm const castPPF = PresidentialPardonForm();
	PresidentialPardonForm pardonCpy = PresidentialPardonForm(castPPF);
	std::cout << pardonCpy;
	std::cout << std::endl;

	ShrubberyCreationForm const castSCF = ShrubberyCreationForm();
	ShrubberyCreationForm treeCpy = ShrubberyCreationForm(castSCF);
	std::cout << treeCpy;
	std::cout << std::endl;

	RobotomyRequestForm const castRRF = RobotomyRequestForm();
	RobotomyRequestForm robotCpy = RobotomyRequestForm(castRRF);
	std::cout << robotCpy;
	std::cout << std::endl;
		
	std::cout << std::endl;
    

	std::cout << "EXECUTE" << std::endl;

	Bureaucrat const *boss = new Bureaucrat("Amancio", 4);

	try
	{
		boss->signForm(*pardon);
		pardon->execute(*boss);	
	}	
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;

	try
	{
		tree->beSigned(boss);
		boss->executeForm(*tree);
	}	
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;

	try
	{
		robot->beSigned(boss);
		boss->executeForm(*robot);
	}	
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;

	delete pardon;	
	delete tree;	
	delete robot;	
	return (0);
}
