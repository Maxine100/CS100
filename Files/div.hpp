#ifndef DIV_HPP
#define DIV_HPP

class Div : public Base {
	public:
		Base* left;
		Base* right;
		Div(Base* left, Base* right) {
			this->left = left;
			this->right = right;
		}
		double evaluate() {
			return left->evaluate() / right->evaluate();
		}
		string stringify() {
			return "(" + left->stringify() + " / " + right->stringify() + ")";
		}
};

#endif
