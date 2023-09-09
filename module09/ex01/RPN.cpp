#include "RPN.hpp"

RPN ::RPN ()
{
}

/*--------------------------------------------------------*/
RPN::RPN (const RPN &a)
{
	this->operator=(a);
}

/*--------------------------------------------------------*/
RPN::~RPN ()
{
}

/*--------------------------------------------------------*/
RPN & RPN::operator = (const RPN &a)
{
	this->_numbers = a._numbers;
	return (*this);
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int RPN::CalculateResult(int operand_1, int operand_2, char operator_char)
{
	double result;
	switch (operator_char)
	{
		case '+':
			result = (double)operand_1 + operand_2;
			break;
		case '-':
			result = (double)operand_2 - operand_1;
			break;
		case '*':
			result = (double)operand_1 * operand_2;
			break;
		case '/':
		{
			if (operand_1 == 0)
				throw std::invalid_argument("Floating Point Exception Dividing by Zero");
			else
				result = operand_2 / operand_1;
		}
	}
	if (result > INT_MAX || result < INT_MIN)
	{
		throw std::overflow_error("Int Overflow");
		return (1);
	}
	else
		return (result);
}


void    RPN::ProcessOperation(std::string input)
{
	std::string operators = "+/*-";
	size_t 		operator_counter, operand_counter;
	int			operand;
	char		operator_c;

	operator_counter = operand_counter = 0;
	for (size_t i = 0; i < input.length() ; i++)
	{
		if (isspace(input[i]))
			continue;
		else if (isnumber(input[i]))
		{
			operand = input[i] - '0';
			operand_counter++;
			this->_numbers.push(operand);
		}
		else if (operators.find(input[i]) != std::string::npos)
		{
			operator_counter++;
			operator_c = input[i];
			operand = _numbers.top();
			_numbers.pop();
			if (_numbers.empty())
				throw std::invalid_argument("Unmatching number of operands and operators");
			_numbers.top() = CalculateResult(operand, _numbers.top(), operator_c);
		}
		else
			throw std::invalid_argument("Invalid argument");
	}
	if (operator_counter != operand_counter - 1)
		throw std::invalid_argument("Unmatching number of operands and operators");
	std::cout << _numbers.top() << "\n";
}
