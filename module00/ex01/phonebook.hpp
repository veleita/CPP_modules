/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:19:24 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 20:39:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		Contact contacts[8];
		int		n_contacts;

		void	add_contact(void);
		void	display_contact_table(void);
		void	search_error(void);
		void	search_contact(void);
};

#endif
