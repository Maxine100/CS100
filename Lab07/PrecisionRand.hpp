#ifndef PRECISIONRAND_HPP
#define PRECISIONRAND_PP

class PrecisionRand : public Rand {
	public:
		PrecisionRand() : Rand() { }
		string stringify() {
			ostringstream streamObj;
			streamObj << setprecision(3) << operand;
			string strObj = streamObj.str();
			return strObj;
		}
};

#endif
