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
		Base* get_left() {
			return input;
		}
		Base* get_right() {
			return nullptr;
		}
		Iterator* create_iterator() {
			return new UnaryIterator(this);
		}
		void accept(CountVisitor* count) {
			count->visit_ceil();
		}
};

#endif
