#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

#include "../Files/base.hpp"
#include "../Files/op.hpp"
#include "../Files/rand.hpp"
#include "../Files/mult.hpp"
#include "../Files/div.hpp"
#include "../Files/add.hpp"
#include "../Files/sub.hpp"
#include "../Files/pow.hpp"
#include "ceil.hpp"
#include "floor.hpp"
#include "abs.hpp"
#include "trunc.hpp"
#include "paren.hpp"

int main() {

	Base* neg_one = new Op(-1);
	Base* two_five = new Op(2.5);
	Base* three = new Op(3);
	Base* four_nine = new Op(4.9);
	Base* ten = new Op(10);
	
	Base* mult = new Mult(two_five, three);
	Base* trunc = new Trunc(mult);
	Base* add = new Add(four_nine, ten);
	Base* floor = new Floor(add);
	Base* div = new Div(floor, neg_one);
	Base* abs = new Abs(div);
	Base* sub = new Sub(trunc, abs);
	Base* paren = new Paren(sub);
	Base* ceil = new Ceil(paren);

	//                       ceil
	//                      paren
	//                       sub
	//          trunc                           abs
	//           mult                           div
	// two_five       three               floor      neg_one
	//                                    add
	//                          four_nine      ten

	cout << "ceil: " << ceil->stringify() << " = " << ceil->evaluate() << endl;
	cout << "paren: " << paren->stringify() << " = " << paren->evaluate() << endl;
	cout << "sub: " << sub->stringify() << " = " << sub->evaluate() << endl;
	cout << "trunc: " << trunc->stringify() << " = " << trunc->evaluate() << endl;
	cout << "mult: " << mult->stringify() << " = " << mult->evaluate() << endl;
	cout << "abs: " << abs->stringify() << " = " << abs->evaluate() << endl;
	cout << "div: " << div->stringify() << " = " << div->evaluate() << endl;
	cout << "floor: " << floor->stringify() << " = " << floor->evaluate() << endl;
	cout << "add: " << add->stringify() << " = " << add->evaluate() << endl;

	add = new Add(neg_one, four_nine);
	trunc = new Trunc(add);
	paren = new Paren(trunc);
	
	//        paren
	//        trunc
	//        add
	// neg_one    four_nine

	cout << "paren: " << paren->stringify() << " = " << paren->evaluate() << endl;
	cout << "trunc: " << trunc->stringify() << " = " << trunc->evaluate() << endl;
	cout << "add: " << add->stringify() << " = " << add->evaluate() << endl;

	return 0;
}
