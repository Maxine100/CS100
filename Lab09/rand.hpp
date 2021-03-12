#ifndef RAND_HPP
#define RAND_HPP

class Rand : public Base {
	public:
		int operand;
		Rand() {
			operand = rand() % 100;
		}
		double evaluate() {
			return static_cast<double>(operand);
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
