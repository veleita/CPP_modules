/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:58:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 13:24:49 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

#include <fstream>

std::string	lineReplace(std::string line, \
			std::string const &search, std::string const &replace);

void	replace(std::string const &filename, \
		std::string const search, std::string const replace);

#endif
