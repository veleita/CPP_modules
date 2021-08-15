/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:33:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 21:07:29 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <string>

Contact::Contact(){
}

Contact::~Contact()
{
}

void Contact::fill_info(int n_contacts)
{
	std::string	fields[5] = {
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret",
	};
	std::string	input;
	std::string	index = std::to_string(n_contacts);

	this->info[0] = index;
	for (int i = 1; i < 6; i++)
	{
		std::cout << "Enter " << fields[i - 1] << ":" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);
		this->info[i] = input;
	}
	std::cout << "Contact registered!" << std::endl << std::endl;
}
