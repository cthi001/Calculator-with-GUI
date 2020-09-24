#ifndef _TANGENT_
#define _TANGENT_
#include "op.hpp"
class Tan : public Base {
public:
Tan(Base* f):Base(),x(f){}
double evaluate(){
                if (x->stringify() == "MATH ERROR") {return 0.00;}
                return tan(x->evaluate());}
std::string stringify(){
        if (x->stringify() == "MATH ERROR") {return "MATH ERROR";}
        std::stringstream ss;std::string b;ss << tan(x->evaluate());ss>>b;
        return b;
}
private:
Base* x;
};

#endif
