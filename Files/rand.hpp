#ifndef RAND_HPP
#define RAND_HPP

class Rand : public Base {
	public:
		double operand;
		Rand() {
			operand = rand() % 100;
		}
		double evaluate() {
			return operand;
		}
		string stringify() {
			return to_string(operand);
		}
};

#endif
