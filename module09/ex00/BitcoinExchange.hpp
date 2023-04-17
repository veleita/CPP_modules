/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:53:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/04/17 13:15:18 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string , float>    _database;
        void                             _loadDatabase();
        
        void    _readInput(std::string inputFile);
        void    _parseInput();

    public:
        BitcoinExchange (std::string inputFile);
        BitcoinExchange (const BitcoinExchange &copy);
        BitcoinExchange & operator = (const BitcoinExchange &rhs);
        ~BitcoinExchange ();
        
        std::map<std::string , float>   getDatabase();
        
        void    printOutput();
};

#endif
