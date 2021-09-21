/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:42:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 11:59:35 by mzomeno-         ###   ########.fr       */
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

	std::cout << "COPY CONSTRUCTORS" << std::endl;
	PresidentialPardonForm const cast = PresidentialPardonForm("Zome");
	PresidentialPardonForm pardonCpy = PresidentialPardonForm(cast);

	std::cout << cast << std::endl;
	pardonCpy.action();
	return (0);
}
