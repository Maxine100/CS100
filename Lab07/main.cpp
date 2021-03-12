#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

#include "../Files/base.hpp"
#include "../Files/op.hpp"
#include "../Files/rand.hpp"

#include "PrecisionOp.hpp"
#include "PrecisionRand.hpp"
#include "SciOp.hpp"
#include "SciRand.hpp"
#include "BaseFactory.hpp"
#include "PrecisionFactory.hpp"
#include "ScientificFactory.hpp"
#include "StandardFactory.hpp"

int main() {
	BaseFactory* precision = new PrecisionFactory();
	Base* preop = precision->createOp(1.2345678);
	Base* prerand = precision->createRand();
	BaseFactory* scientific = new ScientificFactory();
	Base* sciop = scientific->createOp(1.2345678);
	Base* scirand = scientific->createRand();
	BaseFactory* standard = new StandardFactory();
	Base* stanop = standard->createOp(1.2345678);
	Base* stanrand = standard->createRand();

	cout << preop->stringify() << endl;
	cout << preop->evaluate() << endl;
	cout << prerand->stringify() << endl;
	cout << prerand->evaluate() << endl;
	cout << sciop->stringify() << endl;
	cout << sciop->evaluate() << endl;
	cout << scirand->stringify() << endl;
	cout << scirand->evaluate() << endl;
	cout << stanop->stringify() << endl;
	cout << stanop->evaluate() << endl;
	cout << stanrand->stringify() << endl;
	cout << stanrand->evaluate() << endl;

	return 0;
}
