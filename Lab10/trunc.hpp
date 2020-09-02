#ifndef TRUNC_HPP
#define TRUNC_HPP

class Trunc : public Base {
	public:
		Base* input;
		Trunc(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return input->evaluate();
		}
		string stringify() {
			return to_string(input->evaluate());
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
			count->visit_trunc();
		}
};

#endif
