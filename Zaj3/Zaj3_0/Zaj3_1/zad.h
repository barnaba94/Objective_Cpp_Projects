#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

struct Punkt
{
	double x;
	double y;
	Punkt(): x(0),y(0){}
	Punkt(int argc, char** argv)
	{
		if(argc != 3)
		{
			printf("Error!!!");
			return;
		}
		x = strtod( argv[1] , NULL );
		y = strtod( argv[2] , NULL );
	}
};

typedef struct Punkt PUNKT;

struct Wektor
{
	struct Punkt p1;
	struct Punkt p2;
	Wektor()
	{
		p1.x = 0;
		p1.y = 0;
		p2.x = 0;
		p2.y = 0;
	}
	Wektor(int argc, char** argv)
	{
		if(argc != 5)
		{
			printf("Error!!!");
			return;
		}
		p1.x = strtod( argv[1] , NULL );
		p1.y = strtod( argv[2] , NULL );
		p2.x = strtod( argv[3] , NULL );
		p2.y = strtod( argv[4] , NULL );
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