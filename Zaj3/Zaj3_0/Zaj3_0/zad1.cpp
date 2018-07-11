#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

struct Punkt
{
	double x;
	double y;
	Punkt():x( 0 ),y( 0 ){}
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

void WypiszPunkt(PUNKT &Punkt)
{
	printf("%lf %lf \n", Punkt.x, Punkt.y);
	return;
}

void WypiszWektor(WEKTOR &w)
{
	printf("%lf %lf %lf %lf \n", w.p1.x, w.p1.y, w.p2.x, w.p2.y);
	return;
}

int main(int argc, char** argv)
{
	PUNKT p1;
	p1.x = 1;
	p1.y = 1;
	PUNKT p2( argc, argv);
	WypiszPunkt( p1 );
	WEKTOR w2(argc, argv);
	WypiszWektor( w2 );
	getchar();
	return 0;
}