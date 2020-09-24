#ifndef _STD_CALC_
#define _STD_CALC_
#include "base_calculator.hpp"
//#include "std_construct.hpp"
//#include "base.hpp"
//#include <vector>
#include <iostream>
class Std_Calc : public Base_Calc {
public:
Std_Calc():Base_Calc(){t = new Std_Construct();s=STD;};
void printform();
private:
std::vector<Base*> order; // base holder
};

#endif
