/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:44:35 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/06/05 12:24:19 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        exit(1);
    }

    BitcoinExchange test(argv[1]);
    std::map<std::string, float > myMap = test.getDatabase();
/*
	for(std::map<std::string, float >::const_iterator it = myMap.begin();
    it != myMap.end(); ++it)
    {
        std::cout << it->first << " " << it->second << "\n";
    }
*/
	return (0);
}
