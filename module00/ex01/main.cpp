/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:50:17 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 17:17:24 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
using namespace std;

int main(void)
{
	string		input;
	Phonebook	phonebook;
	bool		exit = false;

	while (exit == false)
	{
		cout << "What would you like to do?" << endl;
		cout << "> ";
		getline(cin, input);

		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			exit = true;
	}
}
