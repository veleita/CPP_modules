/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:50:17 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/16 11:33:46 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
	std::string		input;
	Phonebook	phonebook;
	bool		exit = false;

	while (exit == false)
	{
		std::cout << "What would you like to do?" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);

		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			exit = true;
	}
}
