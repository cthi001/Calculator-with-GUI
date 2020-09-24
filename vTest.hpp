#ifndef _VTEST_HPP_
#define _VTEST_HPP_

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
#include <iostream>
#include "add.hpp"
#include "Div.hpp"

TEST(Eten,positiveInt)
{
        Op* a = new Op(36);

        Eten* test = new Eten(a);
        EXPECT_EQ(test->stringify(),"E (36)");
	EXPECT_EQ(test->evaluate(),pow(10,36));
}

TEST(Eten,negativeInt)
{
	Op* a = new Op(-5);

	Eten* test = new Eten(a);
	EXPECT_EQ(test->evaluate(),pow(10,-5));
	EXPECT_EQ(test->stringify(),"E (-5)");
}

TEST(Eten,testComboTest)
{
	Op* a = new Op(32);
	Op* b = new Op(45);
	Op* c = new Op(11);
	Op* d = new Op(2);

	Add* add = new Add(a,b);
	Div* div = new Div(add,c);
	Eten* e = new Eten(div);
	EXPECT_EQ(e->evaluate(),pow(10,7));
	EXPECT_EQ(e->stringify(),"E (32 + 45 / 11)");
}


TEST(PowTwo,positiveInt)
{
        Op* a = new Op(36);

        PowTwo* test = new PowTwo(a);
        EXPECT_EQ(test->stringify(),"2 ^ (36)");
        EXPECT_EQ(test->evaluate(),pow(2,36));
}

TEST(PowTwo,negativeInt)
{
        Op* a = new Op(-5);

        PowTwo* test = new PowTwo(a);
        EXPECT_EQ(test->evaluate(),pow(2,-5));
        EXPECT_EQ(test->stringify(),"2 ^ (-5)");
}

TEST(PowTwo,testComboTest)
{
        Op* a = new Op(32);
        Op* b = new Op(45);
        Op* c = new Op(11);
        Op* d = new Op(2);

        Add* add = new Add(a,b);
        Div* div = new Div(add,c);
        PowTwo* e = new PowTwo(div);
        EXPECT_EQ(e->evaluate(),pow(2,7));
        EXPECT_EQ(e->stringify(),"2 ^ (32 + 45 / 11)");
}



#endif
