#include <iostream>
#include <cmath>
#include <cstdlib>

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

	cout << "Creating vector container." << endl;
	Container* veca = new VectorContainer();
	veca->add_element(TreeA);
	veca->add_element(TreeB);
	veca->add_element(TreeC);
	
	cout << "Vector container elements." << endl;
	cout << veca->at(0)->evaluate() << endl;
	cout << veca->at(1)->evaluate() << endl;
	cout << veca->at(2)->evaluate() << endl;
	veca->print();
	cout << endl;
	
	cout << "Creating selection sort." << endl;
	veca->set_sort_function(new SelectionSort());
	cout << "Sorting" << endl;
	veca->sort();

	cout << "Vector container after selection sort." << endl;
	cout << veca->at(0)->evaluate() << endl;
	cout << veca->at(1)->evaluate() << endl;
	cout << veca->at(2)->evaluate() << endl;
	veca->print();
	cout << endl;
	
	cout << "Creating vector container." << endl;
	Container* vecb = new VectorContainer();
    	vecb->add_element(TreeA);
    	vecb->add_element(TreeB);
    	vecb->add_element(TreeC);
    	
	cout << "Vector container elememnts." << endl;
    	cout << vecb->at(0)->evaluate() << endl;
    	cout << vecb->at(1)->evaluate() << endl;
    	cout << vecb->at(2)->evaluate() << endl;
    	vecb->print();
    	cout << endl;
    	
	cout << "Creating bubble sort." << endl;
    	vecb->set_sort_function(new BubbleSort());
	cout << "Sorting" << endl;
    	vecb->sort();
    	
	cout << "Vector container after bubble sort." << endl;
    	cout << vecb->at(0)->evaluate() << endl;
    	cout << vecb->at(1)->evaluate() << endl;
    	cout << vecb->at(2)->evaluate() << endl;
    	vecb->print();
    	cout << endl;
    	
	cout << "Creating list container." << endl;
    	Container* lista = new ListContainer();
    	lista->add_element(TreeA);
    	lista->add_element(TreeB);
    	lista->add_element(TreeC);
    	
	cout << "List container elements." << endl;
    	cout << lista->at(0)->evaluate() << endl;
    	cout << lista->at(1)->evaluate() << endl;
    	cout << lista->at(2)->evaluate() << endl;
    	lista->print();
    	cout << endl;
   	 
	cout << "Creating selection sort." << endl;
    	lista->set_sort_function(new SelectionSort());
	cout << "Sorting" << endl;
    	lista->sort();
    	
	cout << "List container after selection sort." << endl;
    	cout << lista->at(0)->evaluate() << endl;
    	cout << lista->at(1)->evaluate() << endl;
    	cout << lista->at(2)->evaluate() << endl;
    	lista->print();
    	cout << endl;
    	
	cout << "Creating list container." << endl;
    	Container* listb = new ListContainer();
    	listb->add_element(TreeA);
    	listb->add_element(TreeB);
    	listb->add_element(TreeC);
    	
	cout << "List container elements." << endl;
    	cout << listb->at(0)->evaluate() << endl;
    	cout << listb->at(1)->evaluate() << endl;
    	cout << listb->at(2)->evaluate() << endl;
    	listb->print();
    	cout << endl;
    	
	cout << "Creating bubble sort." << endl;
    	listb->set_sort_function(new BubbleSort());
	cout << "Sorting" << endl;
	// I'm not sure why, but if there isn't a cout statement here the following function won't execute (I'm working on Ubuntu).
    	listb->sort();
	
	cout << "List container after bubble sort." << endl;
	cout << listb->at(0)->evaluate() << endl;
	cout << listb->at(1)->evaluate() << endl;
	cout << listb->at(2)->evaluate() << endl;
	listb->print();
	cout << endl;

	return 0;
}
