#ifndef OP_HPP
#define OP_HPP

class Op : public Base {
	public:
		double operand;
		Op(double operand) {
			this->operand = operand;
		}
		double evaluate() {
			return operand;
		}
		string stringify() {
			return to_string(operand);
		}
};

#endif
