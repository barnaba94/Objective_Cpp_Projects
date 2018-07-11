#include "zad.h"

int main(int argc, char** argv)
{
	//create a vector from points
	PUNKT p1, p2, p3;
	WEKTOR w3;
	p1.x = 1;
	p1.y = 1;
	
	p2.x = 1;
	p2.y = 4;

	P_P_W( p1 , p2 , w3);
	WypiszWektor( w3 );

	//adding and substracting vectors
	WEKTOR w1, w2;
	w1.p1.x = 1;
	w1.p1.y = 1;
	w1.p2.x = 3;
	w1.p2.y = 3;

	w2.p1.x = 1;
	w2.p1.y = 1;
	w2.p2.x = 3;
	w2.p2.y = 3;

	W_W_W_add( w1 , w2 , w3 );
	WypiszWektor( w3 );
	W_W_W_sub( w1 , w2 , w3 );
	WypiszWektor( w3 );

	//dot product
	double res, res1;
	dot_product( w1, w2, res);
	printf("Dot product: %lf \n", res);
	
	//vector length
	vec_length( w1, res1 );
	printf("Vector length: %lf \n", res1);

	//coef
	double coef = 0.5;
	P_P_coef( p1 , p2 , p3 , coef );
	WypiszPunkt( p1 );
	WypiszPunkt( p2 );
	printf(" New point (coef = %.2lf): %.2lf %.2lf \n", coef , p3.x, p3.y);

	getchar();
	return 0;
}

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

void P_P_W(PUNKT p1, PUNKT p2, WEKTOR &w3 )
{
	w3.p1.x = p1.x ;
	w3.p1.y = p1.y ;
	w3.p2.x = p2.x ;
	w3.p2.y = p2.y ;
	return;
}

void W_W_W_add(WEKTOR &w1, WEKTOR &w2, WEKTOR &w3 )
{
	w3.p1.x = w1.p1.x + w2.p1.x;
	w3.p1.y = w1.p1.y + w2.p1.y;
	w3.p2.x = w1.p2.x + w2.p2.x;
	w3.p2.y = w1.p2.y + w2.p2.y;
	return;
}

void W_W_W_sub(WEKTOR &w1, WEKTOR &w2, WEKTOR &w3 )
{
	w3.p1.x = w1.p1.x - w2.p1.x;
	w3.p1.y = w1.p1.y - w2.p1.y;
	w3.p2.x = w1.p2.x - w2.p2.x;
	w3.p2.y = w1.p2.y - w2.p2.y;
	return;
}

void dot_product(WEKTOR &w1, WEKTOR &w2, double &res)
{
	res = (w1.p2.x - w1.p1.x)*(w2.p2.x - w2.p1.x)+(w1.p2.y - w1.p1.y)*(w2.p2.y - w2.p1.y);
	return;
}

void vec_length(WEKTOR &w1, double &res)
{
	res = sqrt((w1.p2.x - w1.p1.x)*(w1.p2.x - w1.p1.x)+(w1.p2.y - w1.p1.y)*(w1.p2.y - w1.p1.y));
	return;
}

void P_P_coef(PUNKT &p1, PUNKT &p2, PUNKT &p3, double coef)
{
	p3.x = (p2.x - p1.x )*coef+p1.x;
	p3.y = (p2.y - p1.y)*coef+p1.y;
	return;
}