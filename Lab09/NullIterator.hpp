#ifndef NULLITERATOR_HPP
#define NULLITERATOR_HPP

class NullIterator : public Iterator {
	public:
		NullIterator(Base* input) : Iterator(input) { }
		void first() { }
		void next() { }
		bool is_done() {
			return true;
		}
		Base* current() {
			return nullptr;
		}
};

#endif
