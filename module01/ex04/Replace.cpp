/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:01:29 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 14:37:13 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>

std::string	lineReplace(std::string line, \
			std::string const &search, std::string const &replace)
{
	std::string result = "";
	std::string	lineCopy = line;

	unsigned long found = line.find(search);

	if (found == std::string::npos)
	{
		result = line;
		return result + "\n";	
	}

	int searchLen = search.length();

	while (found != std::string::npos)
	{
		result += line.substr(0, found);
		result += replace;
		lineCopy = line.substr(found + searchLen, std::string::npos);
		found = lineCopy.find(search);
		line = lineCopy;
	}
	result += line;

	return result + "\n";	
}

void	replace(std::string const &filename, \
		std::string const search, std::string const replace)
{
	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(filename);
	outfile.open(filename + ".replace");


	std::string	line;

	while (std::getline(infile, line))
	{
		outfile << lineReplace(line, search, replace);
	}

	infile.close();
	outfile.close();
}
