#ifndef STANDARDFACTORY_HPP
#define STANDARDFACTORY_HPP

class StandardFactory : public BaseFactory {
	public:
		StandardFactory() { }
		Base* createOp(double value) {
			return new Op(value);
		}
		Base* createRand() {
			return new Rand();
		}
};

#endif
