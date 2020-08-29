#ifndef BASEFACTORY_HPP
#define BASEFACTORY_HPP

class BaseFactory {
	public:
		/* Constructor */
		BaseFactory() { }

		/* Pure Virtual Production Functions */
		virtual Base* createOp(double value) = 0;
		virtual Base* createRand() = 0;
};

#endif
