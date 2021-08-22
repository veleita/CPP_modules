/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:44:14 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 19:35:17 by zome             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Expecting one argument." << std::endl;
		return (-1);
	}

	Karen 		exampleKaren;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		filter = 0;

	while (filter <= 4)
	{
		if (argv[1] == levels[filter])
			break;
		filter++;
	}
	switch(filter)
	{
		case 0 :
			std::cout << "[DEBUG]" << std::endl;;
			exampleKaren.complain("DEBUG");
		case 1 :
			std::cout << "[INFO]" << std::endl;;
			exampleKaren.complain("INFO");
		case 2 :
			std::cout << "[WARNING]" << std::endl;;
			exampleKaren.complain("WARNING");
		case 3 :
			std::cout << "[ERROR]" << std::endl;
			exampleKaren.complain("ERROR");
			break;
		default:
			std::cout << \
				"[ Probably complaining about insignificant problems ]" \
				<< std::endl;
	}
	
	return (0);
}
