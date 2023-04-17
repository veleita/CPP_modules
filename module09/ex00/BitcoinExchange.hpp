/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:53:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/04/03 20:29:57 by mzomeno-         ###   ########.fr       */
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
        std::map<std::string , float> _database;

    public:
        BitcoinExchange (std::string inputFile);
        BitcoinExchange (const BitcoinExchange &copy);
        ~BitcoinExchange ();
        
        BitcoinExchange & operator = (const BitcoinExchange &rhs);
        
        std::map<std::string , float>   getDatabase();
};

#endif
