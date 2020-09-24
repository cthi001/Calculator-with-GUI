#ifndef __POWTWO_HPP__
#define __POWTWO_HPP__

#include "base.hpp"
#include "op.hpp"
#include <cmath>

class PowTwo : public Base {

private:
	Base* exponent;

public:
        PowTwo(Base* first) : exponent(first){ }
        double evaluate() { return pow(2,exponent->evaluate()); }
        std::string stringify() { return "2 ^ (" + exponent->stringify() + ")" ;}
};

#endif
