/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:53:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/09/07 14:17:48 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <stdlib.h>
#include <ctype.h>

class BitcoinExchange
{
    private:
        std::map<std::string , float>    _database;

    public:
        BitcoinExchange ();
		BitcoinExchange (std::string inputFile, std::string database = "data/data.csv");
        BitcoinExchange (const BitcoinExchange &copy);
        BitcoinExchange & operator = (const BitcoinExchange &rhs);
        ~BitcoinExchange ();
        
        std::map<std::string , float>   getDatabase();
        void                            setDatabase(std::string filepath);
        
        void    getResultsFromFile(std::string inputFile);
        float   getResultFromLine(std::string date, float value);
};

#endif
