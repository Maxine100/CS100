#ifndef POW_HPP
#define POW_HPP

class Pow : public Base {
	public:
		Base* left;
		Base* right;
		Pow(Base* left, Base* right) {
			this->left = left;
			this->right = right;
		}
		double evaluate() {
			return pow(left->evaluate(), right->evaluate());
		}
		string stringify() {
			return "(" + left->stringify() + " ** " + right->stringify() + ")";
		}
};

#endif
