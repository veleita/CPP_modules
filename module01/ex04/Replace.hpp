/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:58:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 19:42:47 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

#include <fstream>

class Replace
{
	private:

	public:
		Replace();
		~Replace();

		void	replace(std::string const &filename, \
				std::string const search, std::string const replace);
		void	Replace::lineReplace(std::string const &line, \
				std::string const &search, std::string const &replace);
};

#endif
