#include <stdio.h>
#include <stdlib.h>

struct Pojemnik
{
	int jedn;
	double poj;
	double zajete;
	Pojemnik():poj(1000) , jedn(3) , zajete(0)
	{}
};

double Dodaj( Pojemnik* , double );
double Odbierz( Pojemnik* , double );
void Wypisz( Pojemnik* );

int main(int argc, char** argv)
{
	Pojemnik p;
	Pojemnik* ptr = &p;
	Wypisz( ptr );
	Dodaj( ptr , 2000 );
	Wypisz( ptr );
	Odbierz( ptr , 500 );
	Wypisz( ptr );
	return 0;
}

//=================================

double Dodaj(Pojemnik* p, double d)
{
	p->zajete += d;
	double temp = 0;
	if( p->zajete > p->poj)
	{
		temp = p->zajete - p->poj;
		p->zajete = p->poj;
	}
	return temp;
}

double Odbierz(Pojemnik* p, double od)
{
	double temp = p->zajete; 
	p->zajete -= od;
	if( p->zajete >= 0 )
		temp = od;
	else if( p->zajete < 0 )
		p->zajete = 0;
	return temp;	
}
void Wypisz( Pojemnik* p)
{
	printf(" %2.1lf %3d %3.1lf \n", p->poj , p->jedn , p->zajete);
	return;
}
