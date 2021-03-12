#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

#include "base.hpp"
#include "Iterator.hpp"
#include "BinaryIterator.hpp"
#include "UnaryIterator.hpp"
#include "NullIterator.hpp"
#include "PreorderIterator.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "dummy.hpp"

int main() {
	
	Base* one = new Op(1);
	Base* three = new Op(3);
	Base* four = new Op(4);
	Base* rand = new Rand();
	Base* add = new Add(three, rand);
	Base* div = new Div(add, one);
	Base* pow = new Pow(div, four);
	Base* dummy = new Dummy(pow);

	cout << pow->stringify() << " = " << pow->evaluate() << endl;

	Iterator* pI = new PreorderIterator(dummy);
	pI->first();
	while (!pI->is_done()) {
		if (pI->current() != nullptr) {
			cout << pI->current()->stringify() << " = " << pI->current()->evaluate() << endl;
		}
		pI->next();
		cout << "--------------------------------------" << endl;
	}

	return 0;
}
