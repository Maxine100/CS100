#ifndef BASE_HPP
#define BASE_HPP

class Iterator;
class Base {
	public:
		Base() { }
		virtual double evaluate() = 0;
		virtual string stringify() = 0;
		virtual Base* get_left() = 0;
		virtual Base* get_right() = 0;
		virtual Iterator* create_iterator() = 0;
};

#endif
