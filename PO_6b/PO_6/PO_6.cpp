// PO_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "klasy.h"
#include "LIFO.h"
#include "FIFO.h"

using namespace std;


int main(int argc, char* argv[])
{
	
	/*Bazowa b1;
	Pochodna p1;
	b1.id();
	p1.id();
	cout<<endl;
	Bazowa* b2 = new Bazowa();
	Pochodna* p2 = new Pochodna();
	b2->id();
	p2->id();
	cout<<endl;
	Bazowa* p3 = new Pochodna();
	p3->id();
	cout<<endl;
	cout<<endl;
	delete p3;
	cout<<endl;
	delete p2;
	delete b2;

	cout<<endl;
	*/

	Queue* a = new LIFO();
	a->push(2);
	
	a->pop();
	a->Release();

	delete a;

	Queue* b = new FIFO();
	b->push(4);
	b->pop();
	
	b->Release();
	
	delete b;
	return 0;
}

