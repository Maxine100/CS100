#ifndef PRECISIONFACTORY_HPP
#define PRECISIONFACTORY_HPP

class PrecisionFactory : public BaseFactory {
	public:
		PrecisionFactory() { }
		Base* createOp(double value) {
			return new PrecisionOp(value);
		}
		Base* createRand() {
			return new PrecisionRand();
		}
};

#endif
