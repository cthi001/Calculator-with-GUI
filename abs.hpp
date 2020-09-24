#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "base.hpp"
#include "op.hpp"
class Abs : public Base {
    public:
	Base* input;
        Abs(Base* first) : input(first){ }
        double evaluate() {
		if(input->evaluate() > -1)
			return input->evaluate();
		else
			return input->evaluate() * -1;
	}

        std::string stringify() { 
		return "|"  + input->stringify() + "|";
	}
};

#endif
