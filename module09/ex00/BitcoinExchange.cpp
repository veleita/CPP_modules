/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:36:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/04/17 17:09:51 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string getDate(std::string line)
{
    return line.substr(0,10);
}

float getValue(std::string line)
{
    std::stringstream   convert;
    float               rate = 0.0;

    convert << line.substr(11);
    convert >> rate;
    return rate;
}

void    BitcoinExchange::setDatabase(std::string filepath)
{
    std::ifstream   input;
    std::string     dataRow;
    std::string     date;
    float           rate;

    input.open(filepath);
    while (!input.eof())
    {
        input >> dataRow;
        date = getDate(dataRow);
        rate = getValue(dataRow);
        _database.insert(std::make_pair(date,rate));
    }
    input.close();
}

bool    isValidLine(std::string line)
{
    (void)line;
    return(true);
}

float   BitcoinExchange::getResultFromLine(std::string date, float value)
{
    std::map<std::string, float>::iterator it = _database.lower_bound(date);
    float result = value * (*it).second;
    return(result);
}

void    BitcoinExchange::getResultsFromFile(std::string inputFile)
{
    std::ifstream   input;
    std::string     line;
    std::string     date;
    float           value;
    float           result;
    
    input.open(inputFile);
    while (!input.eof())
    {
        input >> line;
        if (isValidLine(line) == false)
            continue;
        date = getDate(line);
        value = getValue(line);
        result = getResultFromLine(date, value);
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    input.close();
}

std::map<std::string , float>   BitcoinExchange::getDatabase()
{
    return this->_database;
}

BitcoinExchange::BitcoinExchange (std::string inputFile)
{
    this->setDatabase("./data.csv");
    this->getResultsFromFile(inputFile); 
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
