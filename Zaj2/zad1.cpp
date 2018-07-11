#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 20

struct tagpudelko {
	char nazwa[MAX];
	double wys;
	double dl;
	double szer;
	double obj;
}pudelko;

typedef struct tagPUDELKO {
	struct tagpudelko para;
}PUDELKO; 


void Wypisz(PUDELKO p)
{
	printf("%s %.2lf %.2lf %.2lf %.2lf \n", p.para.nazwa , p.para.dl , p.para.szer , p.para.wys, p.para.obj);
	return;
}

void Zmien(PUDELKO &p)
{
	p.para.szer = 3;
	p.para.dl = 4;
	p.para.wys = 5;
	return;
}

PUDELKO* PudelkoWPudelko(PUDELKO &p, PUDELKO &p1)
{
	std::cout<<&p<<std::endl;
	std::cout<<&p1<<std::endl;
	if(p.para.dl >= p1.para.dl)
		if(p.para.szer >= p1.para.szer)
			if(p.para.wys >= p1.para.wys)
				return &p;
	if(p1.para.dl >= p1.para.dl)
		if(p1.para.szer >= p.para.szer)
			if(p1.para.wys >= p.para.wys)
				return &p1;
	return NULL;
}

int main(int argc, char** argv)
{
	PUDELKO przyklad1;
	PUDELKO przyklad2;
	strcpy( przyklad1.para.nazwa, "pudelko1");
	przyklad1.para.dl = 2 ;
	przyklad1.para.szer = 2;
	przyklad1.para.wys = 2;
	przyklad1.para.obj = 8;
	strcpy( przyklad2.para.nazwa, "pudelko2");
	przyklad2.para.dl = 1 ;
	przyklad2.para.szer = 1;
	przyklad2.para.wys = 1;
	przyklad2.para.obj = 1;
	Wypisz( przyklad1 );
	//Zmien(przyklad1);
	Wypisz( przyklad2 );
	std::cout<<PudelkoWPudelko( przyklad1 , przyklad2 );
	return 0;
}
