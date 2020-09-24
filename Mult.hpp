#ifndef _MULT_HPP_
#define _MULT_HPP_
#include "op.hpp"
#include <iostream>

class Mult : public Op {
public:
Mult(Base* x,Base* y): Op(evaluate_(x,y) ){temp1 = x, temp2 =y;}
std::string stringify();
double evaluate_(Base* x,Base* y);
protected:
Base* temp1;
Base* temp2;
};

#endif
