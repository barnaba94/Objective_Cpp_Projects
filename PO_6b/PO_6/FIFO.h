#ifndef Fifo
#define Fifo

#include <iostream>
#include "Queue.h"
using namespace std;

#define SIZE 5

class FIFO : public Queue
{
public:
	int tab[SIZE];
	int head;
	int tail;

	 FIFO();
	~ FIFO();
	void push(int a);
	int pop();
	int top();
	int IsEmpty();
	int IsFull();
	//void Print();
	void Release();
private:

};
#endif