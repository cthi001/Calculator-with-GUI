#include "add.hpp"

double Add::evaluate_(Base* x, Base* y) {
	return x ->evaluate() + y ->evaluate();
}

string Add::stringify() {
	return x1 ->stringify() + " + " + y1 ->stringify();
}


