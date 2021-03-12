#ifndef UNARYITERAOTR_HPP
#define UNARYITERAOTR_HPP

class UnaryIterator : public Iterator {
	public:
		Base* curr;
		UnaryIterator(Base* input) : Iterator(input) { }
		void first() {
			curr = self_ptr->get_left();
		}
		void next() {
			curr = nullptr;
		}
		bool is_done() {
			if (curr == nullptr) {
				return true;
			}
			return false;
		}
		Base* current() {
			return curr;
		}
};

#endif
