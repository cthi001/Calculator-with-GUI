#ifndef _LOG_
#define _LOG_
#include "op.hpp"
class Log : public Base {
public:

Log(Base* f):Base(),x(f){}
double evaluate(){
                if (x->evaluate() < 0) {return 0.00;}
                return log10(x->evaluate());}
std::string stringify(){
        if (x->stringify() == "MATH ERROR" || x->evaluate() <= 0) {return "MATH ERROR";}
        std::stringstream ss;std::string b;ss << log10(x->evaluate());ss>>b;
        return b;
}
private:
Base* x;
};

#endif
