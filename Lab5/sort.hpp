#ifndef SORT_HPP
#define SORT_HPP

class Sort {
	public:
		/* Constructors */
		Sort();

		/* Pure Virtual Functions */
		virtual void sort(Container* container) = 0;
};

#endif