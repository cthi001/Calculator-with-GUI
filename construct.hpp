#ifndef _CONSTRUCT_
#define _CONSTRUCT_
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "var_root.hpp"
#include "e.hpp"
#include "mod.hpp"
#include "PowTwo.hpp"
#include "ETen.hpp"
#include "squ_root.hpp"
#include "abs.hpp"
#include "factorial.hpp"
#include "sine.hpp"
#include "cosine.hpp"
#include "tangent.hpp"
#include "log.hpp"
#include "ln.hpp"
#include <vector>

class Construct {
public:
Construct(){};
virtual Base* construct(std::vector<std::string> d);
virtual Base* construct(Base* d,const char s,int a){return nullptr;};
private:
};

#endif
