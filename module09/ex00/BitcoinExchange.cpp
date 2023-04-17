/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:36:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/04/17 12:03:52 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string getDate(std::string database)
{
    return database.substr(0,10);
}

float getRate(std::string database)
{
    std::stringstream   convert;
    float               rate = 0.0;

    convert << database.substr(11);
    convert >> rate;
    return rate;
}

BitcoinExchange::BitcoinExchange (std::string inputFile)
{
    std::ifstream   input;
    std::string     dataRow;
    std::string     date;
    float           rate;

    input.open(inputFile);
    while (!input.eof())
    {
        input >> dataRow;
        date = getDate(dataRow);
        rate = getRate(dataRow);
        _database.insert(std::make_pair(date,rate));
    }
    input.close();
}

BitcoinExchange::BitcoinExchange (const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange::~BitcoinExchange ()
{}        

BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange &rhs)
{
    (void)rhs;
    return *this;
}

std::map<std::string , float>   BitcoinExchange::getDatabase()
{
    return this->_database;
}
