#include "std_calculator.hpp"
#include <iomanip>
void Std_Calc::printform() {
	Base_Calc::printform();
	std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;
	std::cout<<"||"<<"STANDARD OPERATOR" <<std::setw(32) << std::setfill(' ') << "||"<<std::endl;
	std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;
}

