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

int RPN::CalculateResult(int operand_1, int operand_2, char operator_char)
{
	switch (operator_char)
	{
		case '+':
			return (operand_1 + operand_2);
		case '-':
			return (operand_2 - operand_1);
		case '*':
			return (operand_1 * operand_2);
		case '/':
		{
			if (operand_2 == 0)
				throw std::invalid_argument("Floating Point Exception Dividing by Zero");
			else
				return (operand_2 / operand_1);
		}
	}
	return (0);
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
		if (isdigit(input[i]))
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
			_numbers.top() = CalculateResult(operand, _numbers.top(), operator_c);
		}
		else if (isspace(input[i]))
			continue;
		else
			throw std::invalid_argument("Error");
	}
	if (operator_counter != operand_counter - 1)
		throw std::invalid_argument("Unmatching number of operands and operators");
	std::cout << _numbers.top() << "\n";
}
