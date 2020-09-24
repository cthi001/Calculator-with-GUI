#ifndef _CTEST_HPP_
#define _CTEST_HPP_

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

TEST(Sin,SineTEST)
{
        Op* a = new Op(3);

        Base* test = new Sin(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0.14112000805986721);
		
}
TEST(Sin,SineDOUBLE_TEST)
{
        Op* a = new Op(0.234);

        Base* test = new Sin(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0.23187035491168681);
		
}
TEST(Cos,cosineTEST)
{
        Op* a = new Op(3);

        Base* test = new Cos(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),-0.98999249660044542);
		
}
TEST(Cos,cosineDOUBLE_TEST)
{
        Op* a = new Op(0.1953);

        Base* test = new Cos(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0.98098949544281566);
		
}
TEST(Tan,TangentTEST)
{
        Op* a = new Op(3);

        Base* test = new Tan(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),-0.1425465430742778);
		
}
TEST(Tan,TangentDOUBLE_TEST)
{
        Op* a = new Op(0.4);

        Base* test = new Tan(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0.42279321873816178);
		
}
TEST(Log,LogarithmicTEST)
{
        Op* a = new Op(3);

        Base* test = new Log(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0.47712125471966244);
		
}

TEST(Ln,naturalLogTEST)
{
        Op* a = new Op(3);

        Base* test = new Ln(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),1.0986122886681098);
		
}
TEST(Log,LogarithmicFAIL_TEST)
{
        Op* a = new Op(-1);

        Base* test = new Log(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0);
		EXPECT_EQ(test->stringify(),"MATH ERROR");
		
}

TEST(Ln,naturalLogFAIL_TEST)
{
        Op* a = new Op(-1);

        Base* test = new Ln(a);
		EXPECT_DOUBLE_EQ(test->evaluate(),0);
		EXPECT_EQ(test->stringify(),"MATH ERROR");
}
#endif