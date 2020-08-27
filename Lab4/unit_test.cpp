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

int main() {
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
