#ifndef MULT_HPP
#define MULT_HPP

class Mult: public Base {
	public:
		Base* left;
		Base* right;

		Mult(Base* left, Base* right) {
			this->left = left;
			this->right = right;
		}
		double evaluate() {
			return left->evaluate() * right->evaluate();
		}
		string stringify() {
			return left->stringify() + " * " + right->stringify();
		}
		Base* get_left() {
			return left;
		}
		Base* get_right() {
			return right;
		}
		Iterator* create_iterator() {
			return new BinaryIterator(this);
		}
};

#endif
