/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:53 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 18:37:21 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>
#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

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
	cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
	cout << "|-------------------------------------------|" << endl;

	for (int i = 0; i < n_contacts; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "|";
			if (this->contacts[i].info[j].length() > 10)
				cout << this->contacts[i].info[j].substr(0, 9) << ".";
			else
				cout << setw(10) << this->contacts[i].info[j];
		}
		cout << "|" << endl;
	}
}

void Phonebook::search_contact(void)
{
	this->display_contact_table();

	int		index;
	string	input;

	cout << "Which entry are you searching for? [Enter index]:" << endl;
	cout << "> ";
	getline(cin, input);

	if (!isdigit(input[0]))
	{
		cout << "Enter a valid input! >:(" << endl;
		this->search_contact();
	}
	else
	{
		index = stoi(input) - 1;
		for (int i = 0; i < 6; i++)
		{
			cout << this->contacts[index].info[i] << endl;
		}
	}
}
