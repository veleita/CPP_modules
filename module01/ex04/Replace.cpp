/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:01:29 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 15:12:04 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int		errorHandling(std::string const &filename, \
		std::string const search, std::string const replace, \
		std::ifstream &infile, std::ofstream &outfile)
{
	if (filename.length() == 0)
		return (-1);

	if (search.length() == 0)
		return (-1);

	if (replace.length() == 0)
		return (-1);

	infile.open(filename, std::ios::in);
	if (!infile.is_open())
	{
		std::cout << "Error: Input File couldn't be opened.";
		return (-1);
	}

	outfile.open(filename + ".replace", std::ios::out);
	if (!outfile.is_open())
	{
		infile.close();
		std::cout << "Error: Output File couldn't be opened.";
		return (-1);
	}

	return (0);
}

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

int		replace(std::string const &filename, \
		std::string const search, std::string const replace)
{
	std::ifstream	infile;
	std::ofstream	outfile;

	if (errorHandling(filename, search, replace, infile, outfile))
		return (-1);

	std::string	line;

	while (std::getline(infile, line))
	{
		outfile << lineReplace(line, search, replace);
	}

	infile.close();
	outfile.close();
	return (0);
}
