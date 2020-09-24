#include "construct.hpp"
Base* Construct::construct(std::vector<std::string> d) {
	if (d.size() ==0 ) {return nullptr;}
	
        std::stringstream ss;
		double v1;
        double v2;
		 Base* op;
		if (d.size()==1) {ss<<d.at(0);ss>>v1;op = new Op(v1);return op;}
              ss << d.at(0)<< " "<<d.at(2)<<" ";
             
                std::string o = d.at(1);
                
                        ss >> v1;
                        ss >> v2;

                ss.clear();
                Base* n1 = new Op(v1);
                Base* n2 = new Op(v2);
                if (o== "*") { 
                         op = new Mult(n1,n2);
                }
                else if (o=="/"){
                        op = new Div(n1,n2);
                }
                else if (o=="+"){
                        op = new Add(n1,n2);
                }
                else if (o=="-"){
                        op = new Sub(n1,n2);
                }
                else if (o == "^"){
                        op = new Pow(n1,n2);
                }
				else if (o == "a"){
                        op = new VarRoot(n1,n2);
                }
				else if (o == "%"){
                        op = new Mod(n1,n2);
                }
        return op;
}


