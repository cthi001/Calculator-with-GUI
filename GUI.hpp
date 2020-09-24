#ifndef _GUI_
#define _GUI_
#include <string>
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "header.h"
class Base_Calc;
class Gui {
public:
Gui(Base_Calc* x): cal(x){}
void run();
std::string get_str(){return b;}
void clear_str();
void set_str(std::string st);
bool valid_num(char c);
void switch_calc();
void printform();
char button();
private:
Base_Calc* cal;
std::string b;
char op= ' ';
int mode=0;
};


#endif
