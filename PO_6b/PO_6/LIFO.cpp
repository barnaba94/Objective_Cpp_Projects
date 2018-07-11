#include "LIFO.h"

LIFO:: LIFO()
{
	for(int i = 0; i < SIZE; i++)
		tab[i] = 0;
	head = 0;
}

LIFO::~ LIFO()
{
	Release();
	cout<<"Destruktror"<<endl;
}
void LIFO::push(int a)
{
	if(IsFull())
	{
		cout<<"Lifo overflow"<<endl;
		return;
	}
	tab[head] = a;
	head++;
}
int LIFO::pop()
{
	if(IsEmpty())
	{
		cout<<"LIFO underflow"<<endl;
		return -1;
	}
	head--;
	int a = tab[head];
	tab[head] = 0;
	return a;
}
int LIFO::top()
{
	if(!IsEmpty())
		return tab[head];
	cout<<"LIFO underflow"<<endl;
	return -1;
}
int LIFO::IsEmpty()
{
	if(head == 0) return 1;
	return 0;
}
int LIFO::IsFull()
{
	if (head == (SIZE)) return 1;
	return 0;
}
void LIFO::Release()
{
	while(!IsEmpty())
		pop();
}