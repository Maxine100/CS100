#ifndef SCIRAND_HPP
#define SCIRAND_HPP

class SciRand : public Rand {
	public:
		SciRand() : Rand() { }
		string stringify() {
			ostringstream streamObj;
			streamObj << scientific << operand;
			string strObj = streamObj.str();
			return strObj;
		}
};

#endif
