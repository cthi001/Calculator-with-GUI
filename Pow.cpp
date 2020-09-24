#include "Pow.hpp"
#include <bits/stdc++.h>

double Pow::evaluate_(Base* x, Base* y) {
	if (x->evaluate()==0 && y ->evaluate() ==0) {return 0;}
	return std::pow(x->evaluate(),y->evaluate());
}
Pow::Pow(Base* x, Base* y) : Op(evaluate_(x,y)) {temp1 =x, temp2 =y;}
 
std::string Pow::stringify() {
	if (temp1->evaluate() ==0 && temp2->evaluate()==0) {return "MATH ERROR";}
	std::string b = temp1->stringify()+ " ** " + temp2->stringify();
	return b;
}
