#ifndef SUB_HPP
#define SUB_HPP
#include "op.hpp"
#include <string>
using namespace std;

class Sub: public Op
{
  protected:
        Base* x1;
        Base* y1;
  public:
        Sub(Base* x, Base* y):Op(evaluate_(x,y)){x1 = x,y1 = y;}
	double evaluate_(Base* x,Base* y);
        string stringify();
};
#endif

