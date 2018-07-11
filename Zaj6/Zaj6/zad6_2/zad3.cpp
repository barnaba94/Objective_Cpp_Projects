// obiekty0904.cpp : Defines the entry point for the console application.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

class pojemnik
{
public:
	int jednostka;
	int pojemnosc;
	int zajete;
	string nazwa;

	pojemnik();
	pojemnik(pojemnik&);
	pojemnik(int,int, int, string);
	
	int Dodaj( int);
	void Wypisz();
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Bipojemnik : pojemnik
{
public:
	string name;
	pojemnik p1;
	pojemnik p2;

	Bipojemnik(): p1(), p2(){};
	Bipojemnik(string name1, int tp1, int tp2, int tjedn1, int tjedn2, int tz1, int tz2, string ts1, string ts2)
	: p1( tp1 ,tjedn1, tz1 , ts1 ), p2( tp2 ,tjedn2, tz2 , ts2 ), name( name1 ) {};
	
	int Dolej( int );
	int Odlej( int );
	void Wypisz ();
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Error
{
public : 
	virtual void Blad(string n, float ile)=0;
};

class Przelanie : public Error
{
public :
	void Blad(string n, float ile)
	{
		cout<<"Blad przelania!!!!!"<<n<<" "<<ile<<endl;
	}
};

class Brakcieczy : public Error
{
public :
	void Blad(string n, float ile)
	{
		cout<<"Brak cieczy!!!!! "<<n<<" "<<ile<<endl;
	}
};
//
//class Przelanie1 : public Error
//{
//public :
//	void Blad(string n, float ile)
//	{
//		cout<<"Blad przelania!!!!!"<<n<<" "<<ile<<endl;
//	}
//};
//
//class Brakcieczy1 : public Error
//{
//public :
//	void Blad(string n, float ile)
//	{
//		cout<<"Brak cieczy!!!!! "<<n<<" "<<ile<<endl;
//	}
//};
//
//

//=============================================================================
int Bipojemnik::Dolej( int dod )
{
	float temp1 = 0;
	try
	{
		p1.zajete += dod;
		if( p1.zajete >  (p1.pojemnosc * powl( 10 , p1.jednostka) ) )
		{	
			temp1 = p1.zajete - p1.pojemnosc * powl( 10 , p1.jednostka) ;
			p1.zajete = p1.pojemnosc * powl( 10 , p1.jednostka );
			throw temp1;
		}
		else
			dod;
	}
	//catch1
	catch(float temp2)
	{

		float temp3 = 0;
	try {
		p2.zajete += temp2;
		if( p2.zajete >  (p2.pojemnosc * powl( 10 , p2.jednostka) ) )
		{
			temp3 = p2.zajete - p2.pojemnosc * powl( 10 , p1.jednostka) ;
			p2.zajete = p2.pojemnosc * powl( 10 , p2.jednostka );
			throw Przelanie();
		}
		else
			return temp2;
		}
		//catch2
	catch(Error &Error1)
		{
			Error1.Blad(name, temp3);
			return 0;
		}
	}
}
//=============================================================================
int Bipojemnik::Odlej( int odlej )
{
	float temp1 = 0;
	try
	{
		p1.zajete -= odlej;
		if( p1.zajete <  0 )
		{	
			temp1 = (-1) * (p1.zajete);
			p1.zajete = 0;
			throw temp1;
		}
		else
			odlej;
	}
	//catch1
	catch(float temp2)
	{
		float temp4 = 0;
		try
		{
			p2.zajete -= temp2;
			if( p2.zajete <  0 )
			{	
				temp4 = (-1) * (p2.zajete);
				p2.zajete = 0;
				throw Brakcieczy();
			}
			else
				temp2;
		}
		//catch2
		catch(Error &Error1)
		{
			Error1.Blad(name, temp4);
			return 0;
		}
	}
}
//=============================================================================

pojemnik::pojemnik(): jednostka(3), pojemnosc(1.0), zajete(0.0), nazwa("Pojemnik1"){};

//=============================================================================

pojemnik::pojemnik(int p, int j, int z, string n)
{
	pojemnosc = p;
	jednostka = j;
	zajete = z;
	nazwa = n;
}

//=============================================================================

pojemnik::pojemnik(pojemnik& p1)
{
	pojemnosc = p1.pojemnosc;
	jednostka = p1.jednostka;
	zajete = p1.zajete;
	nazwa = p1.nazwa;
}
/*

//=============================================================================
//functions
int pojemnik::Dodaj( int dod )
{
	int temp1 = 0;
	zajete += dod; 
	if( zajete > (pojemnosc * powl( 10 , jednostka) ) )
	{

		temp1 = zajete - pojemnosc * powl( 10 , jednostka) ;
		zajete = pojemnosc * powl( 10 , jednostka );
		return 	temp1;
	}
	else
		return 0;	
}

void pojemnik::Wypisz()
{
	cout<<pojemnosc<<"  "<<jednostka<<"  "<<zajete <<" " << nazwa <<endl;
}
*/
void Bipojemnik::Wypisz()
{
		cout <<p1.nazwa<<" "<<p1.pojemnosc<<" "<<p1.jednostka<<" "<<p1.zajete<<" " <<p2.nazwa<<" "<<p2.pojemnosc<<" "<<p2.jednostka<<" "<<p2.zajete<<endl;
} 
//=============================================================================
int main( int argc, char** argv )
{
	Bipojemnik bpoj1("Bip1",2, 1, 3, 3, 0, 0, "pojemnik1:", "pojemnik2:");

	bpoj1.Wypisz();
	bpoj1.Dolej(3500);
	bpoj1.Wypisz();

	bpoj1.Odlej(3500);
	bpoj1.Wypisz();


	getchar();
	return 0;
}