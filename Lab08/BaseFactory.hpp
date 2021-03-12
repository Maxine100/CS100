#ifndef BASEFACTORY_HPP
#define BASEFACTORY_HPP

class BaseFactory {
	public:
		BaseFactory() { }
		virtual Base* createOp(double value) {
			return new Op(value);
		}
		virtual Base* createRand() {
			return new Rand();
		}
};

#endif

