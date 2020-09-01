#ifndef dummy_hpp
#define DUMMY_HPP

class Dummy : public Base {
	public:
		Base* input;
		Dummy(Base* input) {
			this->input = input;
		}
		double evaluate() {
			return -1;
		}
		string stringify() {
			return "";
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
};

#endif
