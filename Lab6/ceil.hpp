#ifndef CEIL_HPP
#define CEIL_HPP

class Ceil : public Base {
	public:
		Base* input;
		Ceil(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return ceil(input->evaluate());
		}
		string stringify() {
			return input->stringify();
		}
};

#endif
