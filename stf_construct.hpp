#ifndef _STF_CONSTRUCT_
#define _STF_CONSTRUCT_
#include "construct.hpp"
//#include "op.hpp"
//#include "add.hpp"
//#include "sub.hpp"
//#include "Mult.hpp"
//#include "Div.hpp"
//#include "Pow.hpp"
// #include "sine.hpp"
// #include "cosine.hpp"
// #include "tangent.hpp"
// #include "log.hpp"
// #include "ln.hpp"
//#include <string>
#include <sstream>
class Stf_Construct:public Construct {
public:
Stf_Construct():Construct(){}
Base* construct(Base* d,const char s,int a);
private:
};

#endif

