/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:53 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 15:49:02 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->n_contacts = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::add_contact(void)
{
	this->contacts[this->n_contacts].fill_info();
	if (this->n_contacts < 7)
		this->n_contacts++;
}
