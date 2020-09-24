#ifndef _BASE_CALC_
#define _BASE_CALC_
//#include "base.hpp"
//#include "construct.hpp"
#include "std_construct.hpp"
//#include <string>
//#include <vector>
enum Type {STD,STF};
class Base_Calc {
public:
std::vector<std::string>* get_vec(){return &vec;}
Base_Calc(){}
virtual void printform() = 0;
virtual bool valid_op(char c);
virtual bool valid_dec (char c){};
virtual Construct* init() {return t;}
Type s;
protected:
std::vector<std::string> vec;
Construct* t;
};
#endif
