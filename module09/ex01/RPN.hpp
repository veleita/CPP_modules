#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>

class rpn
{
    private:
        std::stack<int>     _numbers;

	public:
        rpn ();
        rpn (const rpn &a);
        rpn & operator = (const rpn &a);

        void    ProcessOperation(std::string input);
        int     CalculateResult(int operand_1, int operand_2, char operator_char)
;
        
		~rpn ();
};

#endif
