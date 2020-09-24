#ifndef __SQU_ROOT_HPP__
#define __SQU_ROOT_HPP__

#include "base.hpp"

class SquRoot : public Base {
    
	
	public:
	Base* input;
        /* Constructors */
        SquRoot(Base* num) : input(num) { }

        /* Pure Virtual Functions */
        double evaluate(){
		if(input->evaluate() < 0)
			return 0;
		return sqrt(input->evaluate());
	}
        std::string stringify(){
		if(input->evaluate() < 0)
			return "MATH ERROR";
		return "(" + input->stringify() + ")^(1/2)";
	}
};

#endif
