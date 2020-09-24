#ifndef __OP_HPP__
#define __OP_HPP__
#include <sstream>
#include "base.hpp"
#include <string>
class Op : public Base {
    public:
        Op(double value) : Base(), val(value){ }
	virtual double evaluate_(Base* x,Base*y){return val;}
	virtual double evaluate() { return val; }
        virtual std::string stringify() { std::stringstream ss; std::string b;ss<<val;ss>>b ;return b; }
   protected:
	double val;
};

#endif //__OP_HPP__
