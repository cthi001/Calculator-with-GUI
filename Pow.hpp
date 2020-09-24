#ifndef _POW_HPP_
#define _POW_HPP_
#include "op.hpp"

class Pow : public Op {
public:
Pow(Base* x, Base* y);
double evaluate_(Base* x,Base*y);
std::string stringify();
private:
Base* temp1;
Base* temp2;
};

#endif
