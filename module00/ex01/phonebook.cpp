/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:53 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 21:05:51 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>
#include <iostream>
#include <ctype.h>
#include <string>

Phonebook::Phonebook()
{
	this->n_contacts = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::add_contact(void)
{
	if (this->n_contacts < 7)
		this->n_contacts++;
	this->contacts[this->n_contacts - 1].fill_info(n_contacts);
}

void Phonebook::display_contact_table(void)
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;

	for (int i = 0; i < n_contacts; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << "|";
			if (this->contacts[i].info[j].length() > 10)
				std::cout << this->contacts[i].info[j].substr(0, 9) << ".";
			else
				std::cout << std::setw(10) << this->contacts[i].info[j];
		}
		std::cout << "|" << std::endl;
	}
}

void Phonebook::search_error(void)
{
	std::cout << "Enter a valid input! >:(" << std::endl << std::endl;
	this->search_contact();
}

void Phonebook::search_contact(void)
{
	if (this->n_contacts == 0)
	{
		std::cout << "Contact table is empty, add some entries first!" << std::endl << std::endl;
		return;
	}

	this->display_contact_table();

	int		index;
	std::string	input;


	std::cout << "Which entry are you searching for? [Enter index]:" << std::endl;
	std::cout << "> ";
	getline(std::cin, input);
	
	if (input.length() > 1 || isalpha(input[0]))
		return (this->search_error());

	index = std::stoi(input) - 1;	
	if (index >= 0 && index < this->n_contacts)
	{
		for (int i = 1; i < 6; i++)
		{
			std::cout << this->contacts[index].info[i] << std::endl;
		}
		return;
	}
	else
		this->search_error();
}
