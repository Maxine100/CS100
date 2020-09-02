#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

#include "CountVisitor.hpp"
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
#include "abs.hpp"
#include "ceil.hpp"
#include "floor.hpp"
#include "paren.hpp"
#include "trunc.hpp"

int main() {

	Base* neg_one = new Op(-1);
	Base* two_one = new Op(2.1);
	Base* three = new Op(3);
	Base* five_five = new Op(5.5);
	Base* seven = new Op(7);
	Base* rand = new Rand();
	Base* div = new Div(rand, neg_one);
	Base* abs = new Abs(div);
	Base* mult = new Mult(abs, three);
	Base* paren = new Paren(seven);
	Base* sub = new Sub(paren, mult);
	Base* trunc = new Trunc(sub);
	Base* add = new Add(trunc, five_five);
	Base* ceil = new Ceil(add);
	Base* floor = new Floor(two_one);
	Base* pow = new Pow(ceil, floor);
	Base* dummy = new Dummy(pow);

	CountVisitor* count = new CountVisitor();
	Iterator* pI = new PreorderIterator(dummy);
	pI->first();
	while (!pI->is_done()) {
		if (pI->current() != nullptr) {
			cout << pI->current()->stringify() << " = " << pI->current()->evaluate() << endl;
		}
		pI->current()->accept(count);
		pI->next();
	}

	cout << "op count: " << count->op_count() << endl;
	cout << "rand count: " << count->rand_count() << endl;
	cout << "mult count: " << count->mult_count() << endl;
	cout << "div count: " << count->div_count() << endl;
	cout << "add count: " << count->add_count() << endl;
	cout << "sub count: " << count->sub_count() << endl;
	cout << "pow count: " << count->pow_count() << endl;
	cout << "abs count: " << count->abs_count() << endl;
	cout << "ceil count: " << count->ceil_count() << endl;
	cout << "floor count: " << count->floor_count() << endl;
	cout << "paren count: " << count->paren_count() << endl;
	cout << "trunc count: " << count->trunc_count() << endl;

	return 0;
}
