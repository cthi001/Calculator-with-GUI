#ifndef _DIV_HPP_
#define _DIV_HPP_

#include "op.hpp"

class Div : public Op {
public:
Div(Base* x,Base* y):Op(0),temp1(x),temp2(y){}
double evaluate();
std::string stringify();
private:
Base* temp1;
Base* temp2;
};
#endif
