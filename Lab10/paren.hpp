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
			count->visit_paren();
		}
};

#endif
