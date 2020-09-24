
#include "Pow.hpp"
#include "add.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "sub.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void print(vector<Base*> d) {
	for (unsigned i = 0;i<d.size();i++) {
		std::cout << d.at(i)->evaluate();
		if (i < d.size()-1) {
		std::cout << " ";
		}
	}
	std::cout << std::endl;
}

unsigned find(string b,vector<string> d) {
	  for (unsigned i = 0;i<b.size();i++) {
                if (b == d.at(i)) {
                	return i;
		}
        }
	return -1;
}


Base* construct(vector<string> d) {
std::stringstream ss;
  	      ss << d.at(0)<< " "<<d.at(1)<<" "<<d.at(2); 
              Op* op;
                std::string o = d.at(1);
                double v1;
                double v2;
		if (!d.empty()) {
                        ss >> v1;
	//		std::cout << v1<<std::endl;;
                }
                if (!d.empty()) {
                        ss >> o;
	//		std::cout << o<<std::endl;;
                }
                if (!d.empty()) {
                        ss >> v2;
	//		std::cout << v2<<std::endl;;
                }
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
		else if (o=="^"){
			op = new Pow(n1,n2);
		}
 		
	return op;
}


int main() {
	std::string d = {"323 + 4"};
	std::vector<std::string> vec;//[ 323 , + , 4 , + , 2 , * , 5 , / , 10 , - , 3 , + , 5]
	std::vector<Base*> order;
	unsigned i =0;
	while (d != "q") {
		cin>>d;
		vec.push_back(d);
		if (vec.size()!=3) {
		continue;
		}
		Base* value = construct(vec);
		vec.pop_back();
		vec.pop_back();
		std::stringstream f;
		f << value->evaluate();
		std::string dou_val;
		f>>dou_val;
		vec.at(0) = dou_val;
		std::cout << vec.at(0)<<std::endl;
		f.clear();
	}

}
