#include "Div.hpp"

double Div::evaluate() {
	if (temp2->evaluate() == 0 ) {return 1;}//weird...
	return temp1->evaluate() / temp2->evaluate();
}
std::string Div::stringify() {
	if (temp2->evaluate() == 0) {return "MATH ERROR";}
	std::string b = temp1->stringify() + " / " + temp2->stringify();
	return b;
}
