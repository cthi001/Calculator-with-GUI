#ifndef _COSINE_
#define _COSINE_
#include "op.hpp"
class Cos:public Base {
public:
	Cos(Base* f):Base(),x(f){}
	std::string stringify(){   if (x->stringify() == "MATH ERROR") {return "MATH ERROR";}
        std::stringstream ss;std::string b;ss << cos(x->evaluate());ss>>b;
        return b;
};
	double evaluate(){
	if (x->stringify() == "MATH ERROR") {return 0.00;}
	return cos(x->evaluate());
	}
private:
Base* x;
};

#endif
