/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:33:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 16:42:56 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <string>
using namespace std;

Contact::Contact(){
}

Contact::~Contact()
{
}

void Contact::fill_info(int n_contacts)
{
	string	fields[5] = {
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret",
	};
	string	input;
	string	index = to_string(n_contacts);

	this->info[0] = index;
	for (int i = 1; i < 6; i++)
	{
		cout << "Enter " << fields[i] << ":" << endl;
		cout << "> ";
		getline(cin, input);
		this->info[i] = input;
	}
	cout << "Contact registered!" << endl << endl;
}
