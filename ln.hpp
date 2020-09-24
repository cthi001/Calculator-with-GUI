#ifndef _LN_
#define _LN_
#include "op.hpp"
class Ln : public Base {
public:

Ln(Base* f):Base(),x(f){}
double evaluate(){
                if (x->evaluate() < 0) {return 0.00;}
                return log(x->evaluate());}
std::string stringify(){
        if (x->stringify() == "MATH ERROR"|| x->evaluate() <= 0) {return "MATH ERROR";}
        std::stringstream ss;std::string b;ss << log(x->evaluate());ss>>b;
        return b;
}
private:
Base* x;
};

#endif


