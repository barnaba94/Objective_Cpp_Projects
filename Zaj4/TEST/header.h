#include <iostream>
#include <stdio.h>
#include <memory.h>
#include <cstdlib>
#include <math.h>

using namespace std;

struct Punkt
{
	double x;
	double y;
	//constructors
	Punkt(): x(0), y(0) {}
	Punkt(int argc, char** argv): x(strtod( argv[1] , NULL)), y(strtod( argv[2] , NULL))
	{
		if( argc != 3)
		{
			printf("Error!!!");
			return;
		}
			//x = strtod( argv[1] , NULL);
			//y = strtod( argv[2] , NULL);
	}
	/*
	Punkt(int argc, char** argv)
	{
		if( argc != 3)
		{
			printf("Error!!!");
			return;
		}
			x = strtod( argv[1] , NULL);
			y = strtod( argv[2] , NULL);
	}*/
};

struct Wektor
{
	double sklx;
	double skly;
	Wektor() : sklx(0), skly(0) {}
	
	Wektor(int argc, char** argv) : sklx(strtod( argv[1] , NULL)), skly(strtod( argv[2] , NULL))
	{
	if( argc != 3)
		{
			printf("Error!!!");
			return;
		}
	}
	/*
	Wektor(int argc, char* argv[])
	{
		if( argc != 3)
		{
			printf("Error!!!");
			return;
		}
			sklx = strtod( argv[1] , NULL);
			skly = strtod( argv[2] , NULL);			
	}*/
};

typedef struct Punkt PUNKT;
typedef struct Wektor WEKTOR; 

void Wypisz_punkt(PUNKT p1);
void Wypisz_wektor(WEKTOR w1);

double dl_Wektora(Wektor* w1);
double odlP_P(Punkt p1, Punkt p2);
int skalar (Wektor* w1 , Wektor* w2);
void W_sub (Wektor* w1 , Wektor* w2, Wektor* w3 );
void W_add (Wektor* w1 , Wektor* w2, Wektor* w3 );
void P_P_W (Punkt p1 , Punkt p2, Wektor* wek1 );
void punkt_new(PUNKT &p1, PUNKT &p2, PUNKT &p3, double odl);
