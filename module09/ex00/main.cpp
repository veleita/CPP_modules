/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:44:35 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/09/06 15:39:32 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "Error: could not open file." << std::endl;
        exit(1);
    }

	if (argc == 2)
    	BitcoinExchange test(argv[1]);
	else if (argc == 3)
    	BitcoinExchange test(argv[1]);
	else
        std::cout << "Error: too many arguments." << std::endl;

	return (0);
}
