#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

class BubbleSort : public Sort() {
	public:
		BubbleSort() : public Sort { }
		void sort(Container* container) {
			int i;
			int j;
			int flag;
			int temp;
			for (i = 1; (i < container->size()) && flag; i++) {
				flag = 0;
				for (j = 0; j < container->size() - 1;j++) {
					if (container->at(j + 1) > container->at(j)) {
						container->swap(j, j + 1);
						flag = 1;
					}
				}
			}
		}
};

#endif
