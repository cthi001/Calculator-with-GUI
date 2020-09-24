#ifndef _RMBOOTHTEST_HPP_
#define _RMBOOTHTEST_HPP_

#include "gtest/gtest.h"
#include "op.hpp"
#include "Mult.hpp"
#include "var_root.hpp"
#include "squ_root.hpp"
#include "e.hpp"
#include "abs.hpp"
#include "factorial.hpp"
#include "mod.hpp"
#include <iostream>

TEST(variableRoot,testIntergers)
{
	Op* eight = new Op(8);
	Op* three = new Op(3);

	VarRoot* root = new VarRoot(eight,three);
//	std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->evaluate(),2);
}
TEST(variableRoot,testNonInt)
{
	Op* eight = new Op(8);
	Op* three = new Op(0.3);

	VarRoot* root = new VarRoot(eight,three);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->evaluate(),0);
}
TEST(variableRoot,testNonIntNegativeString)
{
	Op* eight = new Op(8);
	Op* three = new Op(0.3);

	VarRoot* root = new VarRoot(eight,three);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->stringify(),"MATH ERROR");
}
TEST(variableRoot,testIntString)
{
	Op* eight = new Op(8);
	Op* three = new Op(3);

	VarRoot* root = new VarRoot(eight,three);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->stringify(),"(8) ^ (1 / 3)");
}
TEST(variableRoot,testComboTest)
{
	Op* two = new Op(2);
	Op* four = new Op(4);
	Op* three = new Op(3);

	Mult* mult = new Mult(two,four);
	VarRoot* root = new VarRoot(mult,three);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->evaluate(),2);
}
////////////////////////////////////////////////////////
TEST(squareRoot,testIntergers)
{
	Op* four = new Op(4);

	SquRoot* root = new SquRoot(four);
//	std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->evaluate(),2);
}
TEST(squareRoot,testNegative)
{
	Op* nOne = new Op(-1);

	SquRoot* root = new SquRoot(nOne);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->evaluate(),0);
}
TEST(squareRoot,testNegativeString)
{
	Op* nOne = new Op(-1);

	SquRoot* root = new SquRoot(nOne);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->stringify(),"MATH ERROR");
}
TEST(squareRoot,testIntString)
{
	Op* four = new Op(4);

	SquRoot* root = new SquRoot(four);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->stringify(),"(4)^(1/2)");
}
TEST(squareRoot,testComboTest)
{
	Op* four1 = new Op(4);
	Op* four = new Op(4);

	Mult* mult = new Mult(four1,four);
	SquRoot* root = new SquRoot(mult);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(root->evaluate(),4);
}
////////////////////////////////////////////////////////
TEST(e,testIntergers)
{
	Op* four = new Op(4);

	E* test = new E(four);
//	std::cout << root->stringify() << std::endl;
	EXPECT_EQ(test->evaluate(),pow(2.718282,4));
}
TEST(e,testNegative)
{
	Op* nOne = new Op(-1);

	E* test = new E(nOne);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(test->evaluate(),pow(2.718282,-1));
}
TEST(e,testNegativeString)
{
	Op* nOne = new Op(-1);

	E* test = new E(nOne);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(test->stringify(),"e ^ (-1)");
}
TEST(e,testIntString)
{
	Op* four = new Op(4);

	E* test = new E(four);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(test->stringify(),"e ^ (4)");
}
TEST(e,testComboTest)
{
	Op* four1 = new Op(4);
	Op* four = new Op(4);

	Mult* mult = new Mult(four1,four);
	E* test = new E(mult);
	//std::cout << root->stringify() << std::endl;
	EXPECT_EQ(test->evaluate(),pow(2.718282,16));
}
////////////////////////////////////////////////////////
TEST(absolute,testIntergersWithString)
{
	Op* four = new Op(4);

	Abs* test = new Abs(four);
	EXPECT_EQ(test->evaluate(),4);
	EXPECT_EQ(test->stringify(),"|4|");
}
TEST(absolute,testDoubleWithString)
{
	Op* four = new Op(4.4);

	Abs* test = new Abs(four);
	EXPECT_EQ(test->evaluate(),4.4);
	EXPECT_EQ(test->stringify(),"|4.4|");
}
TEST(absolute,testNegativeWithString)
{
	Op* nSeven = new Op(-7);

	Abs* test = new Abs(nSeven);
	EXPECT_EQ(test->evaluate(),7);
	EXPECT_EQ(test->stringify(),"|-7|");

}
TEST(absolute,testComboTest)
{
	Op* nFour = new Op(-4);
	Op* four = new Op(4);

	Mult* mult = new Mult(nFour,four);
	Abs* test = new Abs(mult);
	EXPECT_EQ(test->evaluate(),16);
	EXPECT_EQ(test->stringify(),"|-4 * 4|");
}
////////////////////////////////////////////////////////
TEST(factorial,testIntergersWithString)
{
	Op* four = new Op(4);

	Factorial* test = new Factorial(four);
	EXPECT_EQ(test->evaluate(),24);
	EXPECT_EQ(test->stringify(),"!4");
}
TEST(factorial,testDoubleWithString)
{
	Op* four = new Op(4.4);

	Factorial* test = new Factorial(four);
	EXPECT_EQ(test->evaluate(),24);
	EXPECT_EQ(test->stringify(),"!4.4");
}
TEST(factorial,testNegativeWithString)
{
	Op* nSeven = new Op(-7);

	Factorial* test = new Factorial(nSeven);
	EXPECT_EQ(test->evaluate(),-5040);
	EXPECT_EQ(test->stringify(),"!-7");

}
TEST(factorial,testComboTest)
{
	Op* two = new Op(2);
	Op* four = new Op(4);

	Mult* mult = new Mult(two,four);
	Factorial* test = new Factorial(mult);
	EXPECT_EQ(test->evaluate(),40320);
	EXPECT_EQ(test->stringify(),"!" + mult->stringify());
}
////////////////////////////////////////////////////////
TEST(mod,testIntergersWithString)
{
	Op* four = new Op(4);
	Op* three = new Op(3);

	Mod* test = new Mod(three,four);
	EXPECT_EQ(test->evaluate(),3);
	EXPECT_EQ(test->stringify(),"3 % 4");
}
TEST(Mod,testDoubleWithString)
{
	Op* four = new Op(4.4);
	Op* three = new Op(3);

	Mod* test = new Mod(three,four);
	EXPECT_EQ(test->evaluate(),3);
	EXPECT_EQ(test->stringify(),"3 % 4.4");
}
TEST(Mod,testNegativeWithString)
{
	Op* nSeven = new Op(-7);
	Op* three = new Op(3);
	Mod* test = new Mod(nSeven,three);
	EXPECT_EQ(test->evaluate(),0);
	EXPECT_EQ(test->stringify(),"MATH ERROR");

}
TEST(Mod,testComboTest)
{
	Op* two = new Op(2);
	Op* four = new Op(4);
	Op* six = new Op(6);

	Mult* mult = new Mult(two,four);
	Mod* test = new Mod(mult,six);
	EXPECT_EQ(test->evaluate(),2);
	EXPECT_EQ(test->stringify(),"2 * 4 % 6" );
}
#endif
