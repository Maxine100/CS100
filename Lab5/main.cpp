#include <iostream>

using namespace std;

#include "../Files/base.hpp"
#include "../Files/op.hpp"
#include "../Files/rand.hpp"
#include "../Files/mult.hpp"
#include "../Files/div.hpp"
#include "../Files/add.hpp"
#include "../Files/sub.hpp"
#include "../Files/pow.hpp"
#include "container.hpp"
#include "sort.hpp"
#include "VectorContainer.hpp"
#include "ListContainer.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"

int main() {
	Base* seven = new Op(7);
	Base* four = new Op(4);
	Base* TreeA = new Mult(seven, four);

	Base* three = new Op(3);
	Base* two = new Op(2);
	Base* TreeB = new Add(three, two);

	Base* ten = new Op(10);
	Base* six = new Op(6);
	Base* TreeC = new Sub(ten, six);

	container* vecs = new VectorContainer();
	vecs->add_element(TreeA);
	vecs->add_element(TreeB);
	vecs->add_element(TreeC);

	cout << vecs->at(0)->evaluate() << endl;
	cout << vecs->at(1)->evaluate() << endl;
	cout << vecs->at(2)->evaluate() << endl;
	vecs->print();
	cout << endl;

	vecs->set_sort_function(new SelectionSort());
	vecs->sort();

	cout << vecs->at(0)->evaluate() << endl;
	cout << vecs->at(1)->evaluate() << endl;
	cout << vecs->at(2)->evaluate() << endl;
	vecs->print();
	cout << endl;
	
	container* vecb = new VectorContainer();
    	vecb->add_element(TreeA);
    	vecb->add_element(TreeB);
    	vecb->add_element(TreeC);
    	
    	cout << vecb->at(0)->evaluate() << endl;
    	cout << vecb->at(1)->evaluate() << endl;
    	cout << vecb->at(2)->evaluate() << endl;
    	vecb->print();
    	cout << endl;
    	
    	vecb->set_sort_function(new BubbleSort());
    	vecb->sort();
    	
    	cout << vecb->at(0)->evaluate() << endl;
    	cout << vecb->at(1)->evaluate() << endl;
    	cout << vecb->at(2)->evaluate() << endl;
    	vecb->print();
    	cout << endl;
    	
    	container* lists = new ListContainer();
    	lists->add_element(TreeA);
    	lists->add_element(TreeB);
    	lists->add_element(TreeC);
    	
    	cout << lists->at(0)->evaluate() << endl;
    	cout << lists->at(1)->evaluate() << endl;
    	cout << lists->at(2)->evaluate() << endl;
    	lists->print();
    	cout << endl;
   	 
    	lists->set_sort_function(new SelectionSort());
    	lists->sort();
    	
    	cout << lists->at(0)->evaluate() << endl;
    	cout << lists->at(1)->evaluate() << endl;
    	cout << lists->at(2)->evaluate() << endl;
    	lists->print();
    	cout << endl;
    	
    	ListContainer* listb = new ListContainer();
    	listb->add_element(TreeA);
    	listb->add_element(TreeB);
    	listb->add_element(TreeC);
    	
    	cout << listb->at(0)->evaluate() << endl;
    	cout << listb->at(1)->evaluate() << endl;
    	cout << listb->at(2)->evaluate() << endl;
    	listb->print();
    	cout << endl;
    	
    	listb->set_sort_function(new BubbleSort());
    	listb->sort();
    	
    	cout << listb->at(0)->evaluate() << endl;
    	cout << listb->at(1)->evaluate() << endl;
    	cout << listb->at(2)->evaluate() << endl;
    	listb->print();
    	cout << endl;
	
	return 0;
}
