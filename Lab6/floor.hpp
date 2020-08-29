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
};

#endif
