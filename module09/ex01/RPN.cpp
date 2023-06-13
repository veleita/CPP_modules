#include "rpn.hpp"

rpn ::rpn ()
{
}

/*--------------------------------------------------------*/
rpn::rpn (const rpn &a)
{
	this->operator=(a);
}

/*--------------------------------------------------------*/
rpn::~rpn ()
{
}

/*--------------------------------------------------------*/
rpn & rpn::operator = (const rpn &a)
{
	*this = a;
	return (*this);
}

int rpn::CalculateResult(int operand_1, int operand_2, char operator_char)
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
				throw std::invalid_argument("Floating Point Exception Dividing by Zero\n");
			else
				return (operand_2 / operand_1);
		}
	}
	return (0);
}


void    rpn::ProcessOperation(std::string input)
{
	std::string operators = "+/*-";
	size_t 		operator_counter, operand_counter = 0;
	int			operand;
	char		operator_c;

	for (size_t i = 0; i < input.length() ; i++)
	{
		if (isdigit(input[i]))
		{
			operand = input[i] - '0';
			num++;
			this->_numbers.push(operand);
		}
		else if (operators.find(input[i]) != std::string::npos)
		{
			operator_counter++;
			operator_c = input[i];
			operand = _numbers.top();
			_numbers.pop();
			_numbers.top() = CalculationResult(operand, _numbers.top(), operator_c);
		}
		else if (isspace(input[i]))
			continue;
		else
			throw std::invalid_argument("Error\n");
	}
	if (operator_counter != operand_counter - 1)
		throw std::invalid_argument("Unmatching number of operands and operators\n");
	std::cout << _numbers.top() << "\n";
}
