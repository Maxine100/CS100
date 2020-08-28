#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

class SelectionSort : public Sort {
	public:
		SelectionSort() : Sort() { }
		void sort(Container* container) {
			int i;
			int j;
			int first;
			for (i = container->size() - 1; i > 0; i--) {
				first = 0;
				for (j = 1; j <= i; j++) {
					if (container->at(j) < container->at(first)) {
						first = j;
					}
				}
				container->swap(i, first);
			}
		}
};

#endif
