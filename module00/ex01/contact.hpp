/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:28:45 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/15 16:43:07 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
using namespace std;

class Contact
{
	public:

		Contact();
		~Contact();
	
		string info[6];

		void	fill_info(int n_contact);
};

#endif
