/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:36:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/04/17 13:14:59 by mzomeno-         ###   ########.fr       */
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

void    BitcoinExchange::_loadDatabase()
{
    std::ifstream   input;
    std::string     dataRow;
    std::string     date;
    float           rate;

    input.open("./data.csv");
    while (!input.eof())
    {
        input >> dataRow;
        date = getDate(dataRow);
        rate = getRate(dataRow);
        _database.insert(std::make_pair(date,rate));
    }
    input.close();
}

void    BitcoinExchange::_readInput(std::string inputFile)
{
    std::ifstream   input;
    input.open(inputFile);
}

void    BitcoinExchange::_parseInput()
{
}

void    BitcoinExchange::printOutput()
{
}

std::map<std::string , float>   BitcoinExchange::getDatabase()
{
    return this->_database;
}

BitcoinExchange::BitcoinExchange (std::string inputFile)
{
    this->_loadDatabase();
    this->_readInput(inputFile);
    this->_parseInput();
    this->printOutput();
}

BitcoinExchange::BitcoinExchange (const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange &rhs)
{
    (void)rhs;
    return *this;
}

BitcoinExchange::~BitcoinExchange ()
{}        
