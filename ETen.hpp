#ifndef __ETEN_HPP__
#define __ETEN_HPP__

#include "base.hpp"
#include "op.hpp"
#include <cmath>
class Eten : public Base {
private:
	Base* exponent;

public:	
        Eten(Base* first) : exponent(first){ }
        double evaluate() { return pow (10,exponent->evaluate()); }
        std::string stringify() { return "E (" + exponent->stringify()+ ")" ;}
};

#endif
