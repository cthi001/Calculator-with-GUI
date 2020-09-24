#include "stf_calculator.hpp"
#include <iomanip>
bool Stf_Calc::valid_dec(char x) {
	if (x == 'w'||x == 'e'||x == 'r'||x == 't'||x == 'y'||x == 'u'||x == 'i'||x == 'o'||x == 'p'||x == 's'||x == 'd') {
		return true;
	}
	return false;
}
void Stf_Calc::printform() {
	Base_Calc::printform();
	std::cout << "||"<<std::setw(49) << std::setfill('_') <<"||"<<std::endl;
	std::cout << "||"<<"SCIENTIFIC OPERATOR" <<std::setw(30) << std::setfill(' ') <<"||"<< endl;
	 std::cout <<"||"<<std::setw(49) << std::setfill(' ') << "||"<<std::endl;
	std::cout << "||  "<< "[w]--Sin(x)";
	std::cout << "  [e]--Cos(x)";
	std::cout << "  [r]--Tan(x)" <<std::setw(10) << std::setfill(' ') <<"||"<<std::endl;
	std::cout <<"||  "<< "[t]--Log(x)";
	std::cout << "  [y]--Ln(x)"<< "   [u]--x!"<<std::setw(14) << std::setfill(' ') <<"||"<<std::endl;
	std::cout << "||  "<< "[i]--e^x";
	std::cout << "     [o]--2^x";
	std::cout << "     [p]--SqRoot(x)" <<std::setw(7) << std::setfill(' ') <<"||"<<std::endl;
	std::cout << "||  "<< "[a]--(x)Root(a)";
	std::cout << "           [s]--|x|" <<std::setw(13) << std::setfill(' ') <<"||"<< std::endl;
	std::cout << "||  "<< "[d]--10^x"<<std::setw(38) << std::setfill(' ') <<"||"<<std::endl;;
	std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;

}