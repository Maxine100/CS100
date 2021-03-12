#ifndef SCIOP_HPP
#define SCIOP_HPP

class SciOp : public Op {
	public:
		SciOp(double input) : Op(input) { }
		string stringify() {
			ostringstream streamObj;
			streamObj << scientific << operand;
			string strObj = streamObj.str();
			return strObj;
		}
};

#endif
