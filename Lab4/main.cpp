#include <iostream>
#include <string>
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

int main() {

	Base* three = new Op(3);
	Base* seven = new Op(7);
	Base* four = new Op(4);
	Base* two = new Op(2);
	Base* random = new Rand();
	Base* add = new Add(three, random);
	Base* pow = new Pow(add, two);
	Base* mult = new Mult(four, seven);
	Base* sub = new Sub(mult, two);
	Base* div = new Div(pow, sub);
	cout << "add: " << add->stringify() << " = " << add->evaluate() << endl;
	cout << "pow: " << pow->stringify() << " = " << pow->evaluate() << endl;
	cout << "mult: " << mult->stringify() << " = " << mult->evaluate() << endl;
	cout << "sub: " << sub->stringify() << " = " << sub->evaluate() << endl;
	cout << "div: " << div->stringify() << " = " << div->evaluate() << endl;

	return 0;
}
