#ifndef SCIENTIFICFACTORY_HPP
#define SCIENTIFICFACTORY_HPP

class ScientificFactory : public BaseFactory {
	public:
		ScientificFactory() { }
		Base* createOp(double value) {
			return new SciOp(value);
		}
		Base* createRand() {
			return new SciRand();
		}
};

#endif
