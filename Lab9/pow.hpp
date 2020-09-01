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
			return left->stringify() + " ** " + right->stringify();
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
