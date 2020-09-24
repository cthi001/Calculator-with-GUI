#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"
#include <cmath>
class E : public Base {
    public:
	Base* inputOne;
	Base* inputTwo;
	
        E(Base* first) : inputOne(first){ }
        double evaluate() { return pow (2.718282,inputOne->evaluate()); }
        std::string stringify() { return "e ^ (" + inputOne->stringify() + ")" ;}
};

#endif
