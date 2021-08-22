/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:01:29 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 11:51:08 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>

Replace::Replace()
{
}

Replace::~Replace()
{
}

std::string	Replace::lineReplace(std::string line, \
			std::string const &search, std::string const &replace)
{
	std::string result = "";
	std::string	lineCopy = line;

	unsigned long found = line.find(search);

	if (found == std::string::npos)
	{
		result = line;
		return result;
	}
	while (found != std::string::npos)
	{
		result += line.substr(0, found);
		result += replace;
		lineCopy = line.substr(found, std::string::npos);
		line = lineCopy;
		found = line.find(search);
	}

	return result;	
}

void	Replace::replace(std::string const &filename, \
		std::string const search, std::string const replace)
{
	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(filename);
	outfile.open(filename + ".replace");


	std::string	line;

	while (std::getline(infile, line))
	{
		outfile << Replace::lineReplace(line, search, replace);
	}

	infile.close();
	outfile.close();
}
