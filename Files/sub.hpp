#ifndef SUB_HPP
#define SUB_HPP

class Sub : public Base {
	public:
		Base* left;
		Base* right;
		Sub(Base* left, Base* right) {
			this->left = left;
			this->right = right;
		}
		double evaluate() {
			return left->evaluate() - right->evaluate();
		}
		string stringify() {
			return "(" + left->stringify() + " - " + right->stringify() + ")";
		}
};

#endif
