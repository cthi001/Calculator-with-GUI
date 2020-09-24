#include "stf_construct.hpp"
#include <sstream>
#include <cmath>
Base* Stf_Construct::construct(Base* d,const char s,int a) {
	// if (Stf_Calc::valid_op(s) ==)
	
	Base* op;
	if (s == 'w') {
		if (a==0) {
			const double pi = 3.1415926535897;
			Base* w = new Op(d->evaluate()*(pi/180));
			op = new Sin(w);return op;
		}
		op = new Sin(d);
	}
	else if (s == 'e') {
		if (a==0) {
			const double pi = 3.1415926535897;
			Base* w = new Op(d->evaluate()*(pi/180));
			op = new Cos(w);return op;
		}
		op = new Cos(d);
	}
	else if (s == 'r') {
		if (a==0) {
			const double pi = 3.1415926535897;
			Base* w = new Op(d->evaluate()*(pi/180));
			op = new Tan(w);return op;
		}
		op = new Tan(d);
	}
	else if (s == 't') {
		op = new Log(d);
	}
	else if (s == 'y') {
		op = new Ln(d);
	}
	//add more here
	else if (s =='u'){ //E
		op = new Factorial(d);
	}
	else if (s =='i'){
		op = new E(d);
	}
	 else if (s =='o'){
		 op = new PowTwo(d);
	 }
	else if (s =='p'){
		op = new SquRoot(d);
	}
	
	else if (s =='s'){
		op = new Abs(d);
	}
	 else if (s =='d'){
		 op = new Eten(d);
	 }
	return op;
}


