#ifndef ABS_HPP
#define ABS_HPP

class Abs : public Base {
	public:
		Base* input;
		Abs(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return abs(input->evaluate());
		}
		string stringify() {
			return input->stringify();
		}
};

#endif
