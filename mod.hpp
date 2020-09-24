#ifndef __MOD_HPP__
#define __MOD_HPP__

#include "base.hpp"
#include "op.hpp"
class Mod : public Base {
    public:
	Base* inputOne;
	Base* inputTwo;
	Mod() : inputOne(), inputTwo(){ inputOne = new Op(0.0); inputTwo = new Op(0.0);}
        Mod(Base* first, Base* second) : inputOne(first), inputTwo(second) { }
        double evaluate() {
		if((int)inputOne->evaluate() < 1 || (int)inputTwo->evaluate() < 1)
			return 0;
		return (int)inputOne->evaluate() % (int)inputTwo->evaluate(); }
        std::string stringify() {
		if((int)inputOne->evaluate() < 1 || (int)inputTwo->evaluate() < 1)
			return "MATH ERROR";
		return inputOne->stringify() + " % " + inputTwo->stringify(); }
};

#endif
