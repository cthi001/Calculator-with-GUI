#ifndef _STF_CALC_
#define _STF_CALC_
#include "base_calculator.hpp"
#include "stf_construct.hpp"
//#include <vector>
#include <iostream>
class Stf_Calc : public Base_Calc {
public:
Stf_Calc():Base_Calc(){t = new Stf_Construct();s=STF;};
bool valid_dec(char c);
void printform();
private:
std::vector<Base*> order; // base holder
};

#endif


