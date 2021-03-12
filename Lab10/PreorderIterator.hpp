#ifndef PREORDERITERATOR_HPP
#define PREORDERITERATOR_HPP

class PreorderIterator : public Iterator {
	public:
		stack<Iterator*> theStack;
		PreorderIterator(Base* input) : Iterator(input) { }
		// Empty the stack (just in case we had something leftover from another run). Create an iterator for the Base* that was passed into the PreorderIteratorconstructor. Initialize that iterator and push it onto the stack.
		void first() {
			while (!theStack.empty()) {
				theStack.pop();
			}
			Iterator* it = self_ptr->create_iterator();
			it->first();
			theStack.push(it);
		}
		// Create an iterator for the current() of the iterator on the top of the stack. Initialize the iterator and push it onto the stack. As long as the top iterator on the stack is_done, pop it off the stack and then advance whatever iterator is now on top of the stack.
		void next() {
			Iterator* it = theStack.top()->current()->create_iterator();
			it->first();
			theStack.push(it);
			while (!theStack.empty() && theStack.top()->is_done()) {
				theStack.pop();
				if (!theStack.empty()) {
					theStack.top()->next();
				}
			}
		}
		// Return true if there are no more elements on the stack to iterate.
		bool is_done() {
			if (theStack.empty()) {
				return true;
			}
			return false;
		}
		// Return the current for the top iterator in the stack.
		Base* current() {
			return theStack.top()->current();
		}
};

#endif
