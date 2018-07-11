#include "FIFO.h"

FIFO:: FIFO()
{
	for(int i = 0; i < SIZE; i++)
		tab[i] = 0;
	head = 0;
	tail = 0;
}
FIFO::~ FIFO()
{
	Release();
	cout << "Destruktor"<<endl;
}
void FIFO::push(int a)
{
	if(IsFull())
	{
		cout<<"FIFO overflow"<<endl;
		return;
	}
	tab[tail] = a;
	tail++;

}

int FIFO::pop()
{
	if(IsEmpty())
	{
		cout<<"FIFO underflow"<<endl;
		return -1;
	}
	int temp = tab[head];
	tab[head] = 0;
	head++;
	return temp;
}

int FIFO::top()
{
	if(!IsEmpty())
		return tab[head];
	cout<<"FIFO underflow"<<endl;
	return -1;
}

int FIFO::IsEmpty()
{
	if (tail == head) return 1;
	return 0;
}

int FIFO::IsFull()
{
	if(tail == SIZE) return 1;
	return 0;
}

void FIFO::Release()
{
	while(!IsEmpty())
		pop();
	head = 0;
	tail = 0;
}
