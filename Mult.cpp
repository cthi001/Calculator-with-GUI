#include "Mult.hpp"

double Mult::evaluate_(Base* x, Base* y) {
	return x->evaluate()*y->evaluate();
}
std::string Mult::stringify() {
		std::string b = temp1->stringify() + " * " + temp2->stringify();
		return b;
		}
