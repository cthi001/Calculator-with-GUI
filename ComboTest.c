#ifndef _COMBOTEST_HPP_
#define _COMBOTEST_HPP_

#include "gtest/gtest.h"
#include "op.hpp"
#include "PowTwo.hpp"
#include "ETen.hpp"
#include "Mult.hpp"
#include "var_root.hpp"
#include "squ_root.hpp"
#include "abs.hpp"
#include "factorial.hpp"
#include "mod.hpp"
#include "sine.hpp"
#include "cosine.hpp"
#include "tangent.hpp"
#include "log.hpp"
#include "ln.hpp"
#include <iostream>
#include "add.hpp"
#include "Div.hpp"
#include "Mult.hpp"
#include "var_root.hpp"
#include "squ_root.hpp"
#include "e.hpp"

TEST(ComboTest,LogTanAddDiv)
{
        Op* a = new Op(3);
        Op* b = new Op(45);
        Op* c = new Op(11);
        Op* d = new Op(0.2);

	Base* log = new Log(a);

	EXPECT_FLOAT_EQ(log->evaluate(), 0.47712126);

        Base* tan = new Tan(d);
	Add* add = new Add(log,b);

	EXPECT_FLOAT_EQ(add->evaluate(), 45.477121);

        Div* div = new Div(add,tan);
	
	EXPECT_FLOAT_EQ(div->evaluate(), 224.34569);
        EXPECT_EQ(div->stringify(),"0.477121 + 45 / 0.20271");
}

TEST(ComboTest,SinCosMultEten)
{
        Op* a = new Op(1.570796);
        Op* b = new Op(1.047198);
	Op* c = new Op(2);
	
        Base* sin = new Sin(a);
        Base* cos = new Cos(b);
        Mult* mult = new Mult(sin,cos);
	Eten* eten = new Eten(c);
	Mult* mult2 = new Mult(mult, eten);

 	EXPECT_FLOAT_EQ(sin->evaluate(), 1);
	EXPECT_FLOAT_EQ(cos->evaluate(), 0.49999961);	
        EXPECT_FLOAT_EQ(mult->evaluate(), 0.49999961);
	EXPECT_FLOAT_EQ(mult2->evaluate(), 49.999962);
        EXPECT_EQ(mult2->stringify(),"1 * 0.5 * E (2)");
}

TEST(ComboTest,SquareRootDiVPowTwo)
{
	Op* a = new Op(4);
	Op* b = new Op(4);

	PowTwo* test = new PowTwo(a);
	SquRoot* root = new SquRoot(b);
	Div* div = new Div(test, root);

	EXPECT_EQ(div->evaluate(),8);
	
}

TEST(ComboTest,FactorialMod)
{
	Op* a = new Op(5);
	Op* four = new Op(4);

	Factorial* test = new Factorial(four);
	EXPECT_EQ(test->evaluate(),24);
	EXPECT_EQ(test->stringify(),"!4");

	Mod* test2 = new Mod(test,a);
	EXPECT_EQ(test2->evaluate(),4);
	EXPECT_EQ(test2->stringify(),"!4 % 5" );

}

TEST(ComboTest,eLnMultAbs)
{
	Op* four = new Op(4);
	Op* one = new Op(-1);

	E* test = new E(four);
	EXPECT_EQ(test->stringify(),"e ^ (4)");

	Ln* test2 = new Ln(test);
	EXPECT_FLOAT_EQ(test2->evaluate(),4);

	Mult* test3 = new Mult(one,test2);
	Abs* test4 = new Abs(test3);

	EXPECT_FLOAT_EQ(test4->evaluate(),4);
}


#endif
