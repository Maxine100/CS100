#ifndef LISTCONTAINER_HPP
#define LISTCONTAINER_HPP

#include <list>
#include <iterator>

class ListContainer : public Container {
	private:
		list<Base*> myList;
	
	public:
		ListContainer() : Container() { }
		ListContainer(Sort* function) : Container(function) { }
		void add_element(Base* element) {
			myList.push_bush(element);
		}
		void print() {
			list<Base*>::iterator it;
			for (it = myList.begin() it != myList.end() ++it) {
				cout << (*it)->stringify() << endl;
			}
		}
		void sort() {
			sort_function()->sort(this);
		}
		void swap(int i, int j) {
			list<Base*>::iterator it1;
			it1 = myList.begin();
			for (int k = 0; k < i; ++k) {
				++it1;
			}
			list<Base*>:: iterator it2;
			it2 = myList.begin();
			for (int k = 0; k < j; ++k) {
				++it2;
			}
			Base* temp = *it1;
			*it1 = *it2;
			*it2 = temp;
		}
		Base* at(int i) {
			list<Base*>::iterator it;
			it = myList.begin();
			for (int k = 0; k < i; ++k) {
				++it;
			}
			return *it;
		}
		int size() {
			return myList.size();
		}
};
#endif
