#include <iostream>
#include <string>

using namespace std;

class Pojemnik
{
	public:
		string nazwa; 
		int jedn;
		double poj;
		double zajete;
	
	Pojemnik( double , int , double , string );
	Pojemnik();
	Pojemnik( Pojemnik &);
	
	double Dodaj( Pojemnik* , double );
	double Odbierz( Pojemnik* , double );
	void Wypisz( Pojemnik* ); //kopiujacy
};

Pojemnik::Pojemnik():poj(1000) , jedn(3) , zajete(0) , nazwa("chuj"){}
Pojemnik::Pojemnik(double poj1 , int jedn1 , double zajete1 , string s1 ) : poj(poj1) , jedn(jedn1) , zajete(zajete1), nazwa(s1) {}
Pojemnik::Pojemnik( Pojemnik & ref1) //kopiujacy
{
	nazwa = ref1.nazwa;
	jedn = ref1.jedn;
	poj = ref1.poj;
	zajete = ref1.zajete;
}

int main(int argc, char** argv)
{
	//stos
	Pojemnik p;
	p = Pojemnik( 100.0 , 2 , 0.0, "chuj dupa");
	Pojemnik* ptr = &p;
	p.Wypisz(ptr);
	
	//sterta
	Pojemnik* p1 = NULL;
	p1 = new Pojemnik(100000 , 6 , 100, "nowy obiekt do chuja" );
	p1->Wypisz(p1); 
	//delete p1;
	
	Pojemnik p2;
	p2 = Pojemnik( *p1 );
	Pojemnik* ptr1 = &p2;
	p2.Wypisz(ptr1);	
	/*
	Pojemnik* ptr = &p;
	p.Wypisz( ptr );
	p.Dodaj( ptr , 2000 );
	p.Wypisz( ptr );
	p.Odbierz( ptr , 500 );
	p.Wypisz( ptr );
	*/
	return 0;
}

//=================================

double Pojemnik::Dodaj(Pojemnik* p, double d)
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

double Pojemnik::Odbierz(Pojemnik* p, double od)
{
	double temp = p->zajete; 
	p->zajete -= od;
	if( p->zajete >= 0 )
		temp = od;
	else if( p->zajete < 0 )
		p->zajete = 0;
	return temp;	
}
void Pojemnik::Wypisz( Pojemnik* p)
{
	cout<< p->poj<<" "<< p->jedn<<" "<< p->zajete<<" "<<p->nazwa<<endl;
	return;
}
