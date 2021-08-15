/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:33:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 15:48:41 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
using namespace std;

Contact::Contact(){
}

Contact::~Contact()
{
}

void Contact::fill_info()
{
	string	fields[5] = {
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret",
	};
	string	input;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter " << fields[i] << ":" << endl;
		cout << "> ";
		getline(cin, input);
		this->info.insert(pair<string, string>(fields[i], input));
	}
	cout << "Contact registered!" << endl << endl;
}
