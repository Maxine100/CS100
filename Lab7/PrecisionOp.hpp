#ifndef PRECISIONoP_HPP
#define PRECISIONOP_HPP

class PrecisionOp : public Op {
	public:
		PrecisionOp(double input) : Op(input) { }
		string stringify() {
			ostringstream streamObj;
			streamObj << setprecision(3) << operand;
			string strObj = streamObj.str();
			return strObj;
		}
};

#endif
