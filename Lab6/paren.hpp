#ifndef PAREN_HPP
#define PAREN_HPP

class Paren : public Base {
	public:
		Base* input;
		Paren(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return input->evaluate();
		}
		string stringify() {
			return "(" + input->stringify() + ")";
		}
};

#endif
