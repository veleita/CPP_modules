/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:01:29 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 19:42:12 by mzomeno-         ###   ########.fr       */
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

void	Replace::lineReplace(std::string const &line, \
		std::string const &search, std::string const &replace)
{
	std::string result = "";

	int found = line.find(search);

	if (found == string::npos)
	{
		result = string;
		return result;
	}
	while (found != string::pos)
	{
		result += line.substr(0, found);
		result += replace;
		line = line.substr(found, string::npos);
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
