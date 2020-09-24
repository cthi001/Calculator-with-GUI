#include "base_calculator.hpp"
#include <iomanip>

bool Base_Calc::valid_op(char c) {
                int z = c;
                if ((z >= 40 && z <=47)||z==94 || (s == STF&&(c=='a' || c =='%'))){
                return true;
                }
        return false;

}
void Base_Calc::printform() {
	std::cout <<"||"<< "Basic Operator" << std::setw(35) << std::setfill(' ') << "||"<<std::endl;
	 std::cout <<"||"<<std::setw(49) << std::setfill(' ') << "||"<<std::endl;
	std::cout <<"||"<<"[+] [-] [/] [*] [^] ";
	if (s == STF) {
	std::cout<<"[%]";
	std::cout<<std::setw(26) << std::setfill(' ') << "||"<<std::endl;return;
	}
	std::cout<<std::setw(29) << std::setfill(' ') << "||"<<std::endl;
}