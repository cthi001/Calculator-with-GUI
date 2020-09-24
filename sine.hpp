#ifndef _SINE_
#define _SINE_
#include "op.hpp"
class Sin : public Base {
public:

Sin(Base* f):Base(),x(f){}
double evaluate(){
		if (x->stringify() == "MATH ERROR") {return 0.00;}
		return sin(x->evaluate());}
std::string stringify(){
	if (x->stringify() == "MATH ERROR") {return "MATH ERROR";}
	std::stringstream ss;std::string b;ss << sin(x->evaluate());ss>>b;
	return b;
}
private:
Base* x;
};

#endif
