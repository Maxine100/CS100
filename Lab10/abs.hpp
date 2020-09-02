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
			count->visit_abs();
		}
};

#endif
