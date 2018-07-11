#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int i = 0;

struct Punkt
{
	double x;
	double y;
	Punkt(): x( 0 ), y(0){}
	Punkt(int argc, char** argv): x( strtod( argv[++i]  , NULL ) ), y( strtod( argv[++i] , NULL ) ) 
	{
		if(argc != 3 && argc != 5)
		{
			printf("Error!!!");
			return;
		}
	}
};

typedef struct Punkt PUNKT;

struct Wektor : PUNKT
{
	struct Punkt p1;
	struct Punkt p2;
	Wektor(): p1( 0 , 0 ) , p2( 0 , 0 ) {}
	Wektor(int argc, char** argv): p1( argc , argv ), p2( argc , argv ) 
	{
		if(argc != 5)
		{
			printf("Error!!!");
			return;
		}
	}
};

typedef struct Wektor WEKTOR;

void WypiszPunkt(PUNKT &Punkt);
void WypiszWektor(WEKTOR &w);
void P_P_W(PUNKT p1, PUNKT p2, WEKTOR &p3 );
void W_W_W_add(WEKTOR &w1, WEKTOR &w2, WEKTOR &w3 );
void W_W_W_sub(WEKTOR &w1, WEKTOR &w2, WEKTOR &w3 );
void dot_product(WEKTOR &w1, WEKTOR &w2, double &wynik);
void vec_length(WEKTOR &w1, double &wynik);
void P_P_coef(PUNKT &p1, PUNKT &p2, PUNKT &p3, double wsp);