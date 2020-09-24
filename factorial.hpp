#ifndef __FACTORIAL_HPP__
#define __FACTORIAL_HPP__

#include "base.hpp"
#include "op.hpp"
class Factorial : public Base {
    private:
	int num;
	int result = 1;
    public:
	Base* inputOne;
	
        Factorial(Base* first) : inputOne(first) { }
        double evaluate() { 
		num = (int)inputOne->evaluate();
		if(num == 0)
			return 1;
		else if(num < 0)
			num *= -1;
		for(int i = 1; i <= num; i++)
		{
			result *= i; 
		}
		if((int)inputOne->evaluate() < 0)
			return result * -1;
		return result;
	}
        std::string stringify() {
		return  "!" + inputOne->stringify();
	}
};

#endif
