#ifndef CONTAINER_HPP
#define CONTAINER_HPP

class Sort;
class Container {
	protected:
		Sort* sort_function;
	
	public:
		/* Constructors */
		Container() : sort_function(nullptr) { };
		Container(Sort* function) : sort_function(sort_function) { };

		/* Non Virtual Functions */
		void set_sort_function(Sort* sort_function) { // Set the type of sorting alogirhtm.
			this->sort_function = sort_function;
		}

		/* Pure Virtual Functions */
		// Push the top pointer of the trees into container.
		virtual void add_element(Base* element) = 0;
		// Iterate through trees and output the expressions (use stringify()).
		virtual void print() = 0;
		// Calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise.
		virtual void sort() = 0;

		/* Function Needed to Sort */
		// Switch tree locations.
		virtual void swap(int i, int j) = 0;
		// Get top ptr of tree at index i.
		virtual Base* at(int i) = 0;
		// Return container size.
		virtual int size() = 0;
};
#endif
