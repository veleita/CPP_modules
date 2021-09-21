/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:42:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 15:14:33 by mzomeno-         ###   ########.fr       */
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
	std::cout << *pardon << std::endl << std::endl;
	
	AForm *tree = new ShrubberyCreationForm();
	std::cout << *tree << std::endl << std::endl;

	std::cout << "COPY CONSTRUCTORS" << std::endl;

	PresidentialPardonForm const castPPF = PresidentialPardonForm("Zome");
	PresidentialPardonForm pardonCpy = PresidentialPardonForm(castPPF);

	ShrubberyCreationForm const castSCF = ShrubberyCreationForm("MA");
	ShrubberyCreationForm treeCpy = ShrubberyCreationForm(castSCF);

	std::cout << pardonCpy << std::endl;
	pardonCpy.action();
	
	std::cout << treeCpy << std::endl;
	treeCpy.action();
	return (0);
}
