/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:36:26 by mzomeno-          #+#    #+#             */
/*   Updated: 2023/06/14 17:15:00 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <math.h>

std::string getDate(std::string line)
{
    return line.substr(0,10);
}

float myStof(std::string string)
{
    std::stringstream   convert(string);
    float               full_rate = 0.00;
	float				rounded_rate = 0.00;

	convert >> full_rate;
	full_rate *= 100;
	rounded_rate = floor(full_rate + 0.5);
	rounded_rate /= 100;
    return rounded_rate;
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
        rate = myStof(dataRow.substr(11));
        _database.insert(std::make_pair(date,rate));
    }
    input.close();
}

float	getValue(std::string line)
{
    size_t idx = line.find("|");
	std::string value_s;
    if (idx != std::string::npos)
		value_s = line.substr(idx + 2);
	return myStof(value_s);
}

bool    isValidFormat(std::string line)
{
    size_t idx = line.find("|");
    if (idx == std::string::npos || 
			line[idx + 1] != ' ' || 
			line[idx - 1] != ' ')
        return(false);
    else
        return(true);
}

bool    invalidDateCharacters(std::string date)
{
    if (date[4] != '-' || date[7] != '-')
        return(true);

	int n;
    for (n = 0; n < 4; n++)
        if (!std::isdigit(date[n]))
            return(true);

    for (n = 5; n < 7; n++)
        if (!std::isdigit(date[n]))
            return(true);

    for (n = 8; n < 10; n++)
        if (!std::isdigit(date[n]))
            return(true);
    
    return(false);
}

int     getMaxDay(int month)
{
    if (month < 8)
        if (month/2 != 0)
            return(31);
        else
            return(30);
    else if (month/2 != 0)
            return(30);
        else
            return(31);
    
    if (month == 2)
        return(28);
}

bool    invalidDateValues(std::string date)
{
    int day, month, year, max_day;
    std::stringstream y, m, d;

    y << date.substr(0,4);
    m << date.substr(5,2);
    d << date.substr(8,2);
    y >> year;
    m >> month;
    d >> day;

    max_day = getMaxDay(month);
    if (day > max_day || month > 12)
        return(true);
	else
		return(false);
}

bool    isValidDate(std::string date)
{
    if (invalidDateCharacters(date) || invalidDateValues(date))
        return(false);
	else
		return(true);
}

bool    isValidValue(float value)
{
	if (value < 0)
	{
        std::cout << "Error: not a positive number.\n";
		return(false);
	}
	if (value > 1000)
	{
        std::cout << "Error: too large a number.\n";
		return(false);
	}
	else
		return(true);
}

bool    isValidLine(std::string line, std::string date, float value)
{
	if (line == "")
		return(false);
    if (line.length() < 14 ||
            isValidFormat(line) == false ||
            isValidDate(date) == false)	
    {
        std::cout << "Error: bad input => " << line << "\n";
        return(false);
    }
	else if (isValidValue(value) == false)
		return (false);
	else
    	return(true);
}

float   BitcoinExchange::getResultFromLine(std::string date, float value)
{
    std::map<std::string, float>::iterator it = _database.lower_bound(date);
	if ((*it).first != date)
		it--;
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
	std::getline(input, line);	// skip first line (date | value)
    while (!input.eof())
    {
		std::getline(input, line);
        date = getDate(line);
        value = getValue(line);
        if (isValidLine(line, date, value) == false)
            continue;
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
    this->setDatabase("./limitedData.csv");
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
