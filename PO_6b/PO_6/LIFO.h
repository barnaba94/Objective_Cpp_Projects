#ifndef Lifo
#define Lifo

#include <iostream>
#include "Queue.h"

using namespace std;

#define SIZE 5

class  LIFO : public Queue
{
public:
	int tab[SIZE];
	int head;
	 LIFO();
	~ LIFO();
	void push(int a);
	int pop();
	int top();
	int IsEmpty();
	int IsFull();
	//void Print();
	void Release();
private:

};
#endif Lifo