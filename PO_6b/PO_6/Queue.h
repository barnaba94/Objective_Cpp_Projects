#ifndef QUEUE
#define QUEUE

#include <iostream>

using namespace std;

#define SIZE 5

class Queue
{
public:
	virtual ~ Queue() { cout<<"Destruktor bazej klasy";}
	virtual void push(int a) = 0;
	virtual int pop() = 0;
	virtual int top() = 0;
	virtual int IsEmpty()= 0;
	virtual int IsFull() = 0;
	//virtual void Print() = 0;
	virtual void Release() = 0;
private:

};
#endif // !QUEUE