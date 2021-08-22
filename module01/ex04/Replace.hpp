/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:58:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 15:11:15 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

#include <iostream>
#include <fstream>
#include <string>

int			errorHandling(std::string const &filename, \
			std::string const search, std::string const replace);

std::string	lineReplace(std::string line, \
			std::string const &search, std::string const &replace);

int			replace(std::string const &filename, \
			std::string const search, std::string const replace);

#endif
