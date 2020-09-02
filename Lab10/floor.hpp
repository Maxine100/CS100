#ifndef FLOOD_HPP
#define FLOOR_HPP

class Floor : public Base {
	public:
		Base* input;
		Floor(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return floor(input->evaluate());
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
			count->visit_floor();
		}
};

#endif
