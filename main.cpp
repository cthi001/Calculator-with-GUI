#include "header.h"
#include <iostream>

int main() {
	Base_Calc* cal = new Stf_Calc();
	Gui interface(cal);
	interface.run();
/*	Base* op3 = new Op(3);
	Base* op5 = new Op(5);
	Base* sinx =new Sin(op3); 
	Base* cosx = new Cos(op3);
	Base* tanx = new Tan(op3);
	Base* logx = new Log(op3);
	Base* lnx = new Ln(op3);
std::cout << "sin: " << sinx->stringify() <<
		" cos: "<< cosx->stringify()<<
		" Tan: "<< tanx->stringify()<<
		" log: "<< logx->stringify()<<
		" ln: "<< lnx->stringify()<<std::endl;*/
	return 0;
}
