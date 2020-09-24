#include "GUI.hpp"
#include<bits/stdc++.h>
#include <iostream>
std::string ToString(char c) {
	std::stringstream ss;
	ss << c;
	std::string f;
	ss >> f;
	ss.clear();
	return f;
}
void Gui::run() {
	char c = '0';
	char o = '0';
		int cnt =0;
		std::string temp;
		std::string saveOp= "";
while(1){
	while(cal->get_vec()->size()<3) {
		this->printform();
		c = this->button();
		if (this->valid_num(c)&&cal->get_vec()->size()==1){
				cal->get_vec()->clear();
				this->clear_str();
				temp.clear();
				temp=ToString(c);
				this->set_str(temp);
					//temp.clear();
					c='0';
				continue;
		}
		if (this->valid_num(c)){
		temp = temp +c;
		this->set_str(temp);continue;
		}
		if (c == 'q') {return;}
		if ( c=='x') {temp.clear();c='0';cal->get_vec()->clear();this->clear_str();continue;}
		if ( c=='v') {this->switch_calc();temp.clear();c='0';cal->get_vec()->clear();this->clear_str();continue;}
		if ( c=='b') {mode = (mode==1)?0:1;temp.clear();c='0';cal->get_vec()->clear();this->clear_str();continue;}
		if ( c=='z') {temp = this->get_str();continue;}
		if (c == '='){if (cal->get_vec()->size()==2||cal->get_vec()->size()==0){cal->get_vec()->push_back(temp);}break;}
		if (cal->s == STF ) {
			if (cal->valid_dec(c)) {
				if (cal->get_vec()->size() ==0) {
					cal->get_vec()->push_back(temp);
				}
				break;
			}
		}
		if (cal->valid_op(c)){
			if (cal->get_vec()->size()==2) {
				cal->get_vec()->push_back(temp);temp.clear();continue;
			}
			else if (cal->get_vec()->size()==1) {
				cal->get_vec()->push_back(ToString(c));temp.clear();
				continue;
			}
			else {
				cal->get_vec()->push_back(temp);
				cal->get_vec()->push_back(ToString(c));temp.clear();
				continue;
			}
		}
	}
			//***********************************
			// std::cout << "size: "<<cal->get_vec()->size()<<std::endl;
			// if (cal->get_vec()->size() ==3) {
			// std::cout << "slot 1: "<<cal->get_vec()->at(0)<<std::endl;
			// std::cout << "slot 2: "<<cal->get_vec()->at(1)<<std::endl;
			// std::cout << "slot 3: "<<cal->get_vec()->at(2)<<std::endl;}
			if (cal->s == STF ) {
				if (!cal->valid_op(c) && cal->valid_dec(c)) {
					while (cal->get_vec()->size() >1) {
						cal->get_vec()->pop_back();
					}
				}
			}
			Base* expression;
			expression = cal->init()->construct(*cal->get_vec());
			//if (expression->evaluate() < 1.0e-10) {delete expression;expression = new Op(0);}
		
			//*******************
			while (cal->get_vec()->size() > 1) {
				cal->get_vec()->pop_back();
			}

			if (cal->s == STF) {
				if (cal->valid_dec(c)) {
				expression = cal->init()->construct(expression, c,mode);
				}
			}
			//if (expression->evaluate() < 1.0e-9) {delete expression;expression = new Op(0);}
		        //std::cout << "stringify: "<<expression->stringify()<<std::endl;
			std::stringstream f;
			f << std::setprecision(5)<<std::fixed<<expression->evaluate();
	        std::string dou_val;
	        f>>dou_val;
			if (dou_val.size() > 15) {dou_val = "CALCULATION ERROR";}
			f.clear();
	        cal->get_vec()->at(0) = dou_val;
			if (expression->stringify() == "MATH ERROR") {
				this->set_str("MATH ERROR");temp.clear();cal->get_vec()->clear();
			}
			else {
				this->set_str(cal->get_vec()->at(0));
			}
			if(cal->valid_op(c)){
				cal->get_vec()->push_back(ToString(c));
			}
			temp.clear();
		
	}
}

void Gui::clear_str(){
	b.clear();
}
void Gui::set_str(std::string str) {
	b = str;
}
bool Gui::valid_num(char c) {
                int z = c;
                if (( z>=48 && z<=57)||z==46){
                return true;
                }
        return false;

}
void Gui::printform() {
		system("clear");
                fflush(stdout);
                std::cout  <<std::setw(15) <<std::setfill(' ')<<" "<< "HONDA-CRV CALCULATOR"<< std::endl;
                std::cout << " "<<std::setw(50) << std::setfill('_')<< " ";
                std::cout <<std::endl;
                std::cout << "||"<<std::setfill(' ')<<std::right<<std::setw(47)<<b<<"||"<< std::endl;
                std::cout << "||"<<std::setw(47) << std::setfill('_') << op<<"||"<<std::endl;
				if (cal->s == STF) {
					std::cout <<"||"<<std::setw(5)<< " " << "Mode: ";
					if (mode == 0) {
						std::cout<< "DEGREE";
					}
					else if (mode == 1){
						std::cout<< "RADIAN";
					}
					std::cout <<std::setw(30)<<" "<<"||"<<std::endl;
				}
                std::cout <<"||"<<std::setw(49) << std::setfill(' ') << "||"<<std::endl;
                std::cout <<"||"<<std::setw(5)<<" "<< "'q'--QUIT "<< std::setw(5)<<" "<< "'z'--BACKSPACE ";
                std::cout<<std::setw(12)<< " " << "||"<<std::endl;
                std::cout <<"||"<<std::setw(49) << std::setfill(' ') << "||"<<std::endl;
                std::cout <<"||"<<std::setw(5)<< " " << "'='--COMPUTE "<< std::setw(2)<<" "<<"'x'--CLEAR"<<std::setw(17)<< " "<<"||"<<std::endl;
                 std::cout <<"||"<<std::setw(5)<< " " << "'v'--Switch Calculator"<<std::setw(20)<<" "<<"||"<<std::endl;
				 if (cal->s == STF) {
					std::cout <<"||"<<std::setw(5)<< " " << "'b'--Switch mode      "<<std::setw(20)<<" "<<"||"<<std::endl;
				 }
				std::cout << "||"<<std::setw(49) << std::setfill('_') << "||"<<std::endl;
				cal->printform();
}

char Gui::button() {
	char c;
    		system ("/bin/stty raw");
                c = getchar();
                system ("/bin/stty cooked");
		if (cal->valid_op(c)||c== '='){op = c;}
                if (c == 'q'){std::cout << "\b";return c;}
		else if (c == 'z'){if(b.empty()){return c;}b.pop_back();}
                else if (c == 'x') {b.clear();}
		else if(c == '=') {
                        return c;
                }
return c;
}
void Gui::switch_calc() {
	if (cal->s == STD) {
		if (cal!=nullptr) {
			delete cal;
			cal = new Stf_Calc();return;
		}
		cal = new Stf_Calc();
	}	
	else {
		if (cal!=nullptr) {
			delete cal;
			cal = new Std_Calc();return;
		}
		cal = new Std_Calc();
	}
}