#ifndef VECTORCONTAINER_HPP
#define VECTORCONTAINER_HPP

#include <vector>

class VectorContainer : public Container {
	private:
		vector<Base*> myVector;
	
	public:
		VectorContainer() : Container() { }
		VectorContainer(Sort* function) : Container(function) { }
		void add_element(Base* element) {
			myVector.push_back(element);
		}
		void print() {
			for (int i = 0; i < myVector.size(); ++i) {
				cout << myVector.at(i)->stringify() << endl;
			}
		}
		void sort() {
			sort_function->sort(this);
		}
		void swap(int i, int j) {
			Base* temp = myVector.at(i);
			myVector.at(i) = myVector.at(j);
			myVector.at(j) = temp;
		}
		Base* at(int i) {
			return myVector.at(i);
		}
		int size() {
			return myVector.size();
		}
};
#endif
