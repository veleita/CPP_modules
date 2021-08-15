/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:53 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 17:23:46 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>
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

void Phonebook::search_contact(void)
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
