#ifndef ADD_HPP
#define ADD_HPP
#include "op.hpp"
#include <string>
using namespace std;

class Add: public Op
{
  protected:
	Base* x1;
	Base* y1;
  public:
	Add(Base*x, Base*y):Op(evaluate_(x,y)) {x1 = x,y1 = y;}
	double evaluate_(Base*,Base*);
	string stringify();
};
#endif

