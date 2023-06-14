#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stdexcept>
#include <stack>

class RPN
{
    private:
        std::stack<int>     _numbers;
        int     CalculateResult(int operand_1, int operand_2, char operator_char);

	public:
        RPN ();
        RPN (const RPN &a);
        RPN & operator = (const RPN &a);

        void    ProcessOperation(std::string input);
        
		~RPN ();
};

#endif
