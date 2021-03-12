#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

#include "gtest/gtest.h"

using namespace std;

#include "../Files/base.hpp"
#include "../Files/op.hpp"
#include "../Files/rand.hpp"
#include "../Files/mult.hpp"
#include "../Files/div.hpp"
#include "../Files/add.hpp"
#include "../Files/sub.hpp"
#include "../Files/pow.hpp"
#include "../Files/mock.hpp"

TEST(Op, one) {
	Base* one = new Op(1);
	EXPECT_EQ("1.000000", one->stringify());
	EXPECT_EQ(1.000000, one->evaluate());
}

TEST(Op, fiftynine_twelve) {
	Base* fiftynine_twelve = new Op(59.12);
	EXPECT_EQ("59.120000", fiftynine_twelve->stringify());
	EXPECT_EQ(59.12, fiftynine_twelve->evaluate());
}

TEST(Op, eightynine_sixfivefourthreetwoone) {
	Base* eightynine_sixfivefourthreetwoone = new Op(89.654321);
	EXPECT_EQ("89.654321", eightynine_sixfivefourthreetwoone->stringify());
	EXPECT_EQ(89.654321, eightynine_sixfivefourthreetwoone->evaluate());
}

Base* four_thirtyseven = new four_thirtysevenMock();
Base* six_sixtyseven = new six_sixtysevenMock();

TEST(Mult, Four_ThirtySevenTimesSix_SixtySeven) {
	Base* mult = new Mult(four_thirtyseven, six_sixtyseven);
	EXPECT_EQ("(4.37 * 6.67)", mult->stringify());
	EXPECT_EQ(29.1479, mult->evaluate());
}

TEST(Mult, Six_SixtySevenTimesFour_ThirtySevenTimes) {
	Base* mult = new Mult(six_sixtyseven, four_thirtyseven);
	EXPECT_EQ("(6.67 * 4.37)", mult->stringify());
	EXPECT_EQ(29.1479, mult->evaluate());
}

TEST(Div, Four_ThirtySevenDivSix_SixtySeven) {
	Base* div = new Div(four_thirtyseven, six_sixtyseven);
	EXPECT_EQ("(4.37 / 6.67)", div->stringify());
	EXPECT_EQ(0.655172, div->evaluate());
}

TEST(Div, Six_SixtySevenDivFour_ThirtySeven) {
	Base* div = new Div(six_sixtyseven, four_thirtyseven);
	EXPECT_EQ("(6.67 / 4.37)", div->stringify());
	EXPECT_EQ(1.52632, div->evaluate());
}

TEST(Add, Four_ThirtySevenPlusSix_SixtySeven) {
	Base* add = new Add(four_thirtyseven, six_sixtyseven);
	EXPECT_EQ("(4.37 + 6.67)", add->stringify());
	EXPECT_EQ(11.04, add->evaluate());
}

TEST(Add, Six_SixtySevenPlusFour_ThirtySeven) {
	Base* add = new Add(six_sixtyseven, four_thirtyseven);
	EXPECT_EQ("(6.67 + 4.37)", add->stringify());
	EXPECT_EQ(11.04, add->evaluate());
}

TEST(Sub, Four_ThirtySevenMinusSix_SixtySeven) {
	Base* sub = new Sub(four_thirtyseven, six_sixtyseven);
	EXPECT_EQ("(4.37 - 6.67)", sub->stringify());
	EXPECT_EQ(-2.3, sub->evaluate());
}

TEST(Sub, Six_SixtySevenMinusFour_ThirtySeven) {
	Base* sub = new Sub(six_sixtyseven, four_thirtyseven);
	EXPECT_EQ("(6.67 - 4.37)", sub->stringify());
	EXPECT_EQ(2.3, sub->evaluate());
}

TEST(Pow, Four_ThirtySevenPowSix_SixtySeven) {
	Base* pow = new Pow(four_thirtyseven, six_sixtyseven);
	EXPECT_EQ("(4.37 ** 6.67)", pow->stringify());
	EXPECT_EQ(18707.3, pow->evaluate());
}

TEST(Pow, Six_SixtySevenPowFour_ThirtySeven) {
	Base* pow = new Pow(six_sixtyseven, four_thirtyseven);
	EXPECT_EQ("(6.67 ** 4.37)", pow->stringify());
	EXPECT_EQ(3994.2, pow->evaluate());
}

int main() {
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
