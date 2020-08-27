#ifndef ADD_HPP
#define ADD_HPP

class Add : public Base {
	public:
		Base* left;
		Base* right;
		Add(Base* left, Base* right) {
			this->left = left;
			this->right = right;
		}
		double evaluate() {
			return left->evaluate() + right->evaluate();
		}
		string stringify() {
			return "(" + left->stringify() + " + " + right->stringify() + ")";
		}
};

#endif
