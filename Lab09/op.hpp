#ifndef OP_HPP
#define OP_HPP

class Op : public Base {
	public:
		double operand;
		Op(double input) {
			operand = input;
		}
		double evaluate() {
			return operand;
		}
		string stringify() {
			return to_string(operand);
		}
		Base* get_left() {
			return nullptr;
		}
		Base* get_right() {
			return nullptr;
		}
		Iterator* create_iterator() {
			return new NullIterator(this);
		}
};

#endif
