#ifndef TRUNC_HPP
#define TRUNC_HPP

class Trunc : public Base {
	public:
		Base* input;
		Trunc(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return input->evaluate();
		}
		string stringify() {
			return to_string(input->evaluate());
		}
};

#endif
