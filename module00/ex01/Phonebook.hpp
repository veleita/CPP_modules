/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:19:24 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/16 11:45:49 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		Contact	contacts[8];
		int		n_contacts;

		void	add_contact(void);
		void	display_contact_table(void) const;
		void	search_error(void) const;
		void	search_contact(void) const;
};

#endif
