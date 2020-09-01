#ifndef BINARYITERATOR_HPP
#define BINARYITERATOR_HPP

class BinaryIterator : public Iterator {
	public:
		Base* curr;
		BinaryIterator(Base* input) : Iterator(input) { }
		void first() {
			curr = self_ptr->get_left();
		}
		void next() {
			if (curr == self_ptr->get_left()) {
				curr = self_ptr->get_right();
			}
			else {
				curr = nullptr;
			}
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
