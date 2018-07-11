#include "header.h"

int main(int argc, char** argv)
{
	//test
	//PUNKT p1 = PUNKT(argc, argv);
	//WEKTOR w1 = WEKTOR(argc, argv);
	//Wypisz_punkt( p1) ;
	//Wypisz_wektor(w1) ;
	WEKTOR wek1 = WEKTOR();
	wek1.sklx = 1; 
	wek1.skly = 2;
	
	WEKTOR wek2 = WEKTOR();
	wek2.sklx = 10; 
	wek2.skly = 21;
	
	WEKTOR wek3 = WEKTOR();
	
	WEKTOR* w1ptr = &wek1;
	WEKTOR* w2ptr = &wek2;
	WEKTOR* w3ptr = &wek3;
	
	W_add (w1ptr , w2ptr, w3ptr );
	W_sub (w1ptr , w2ptr, w3ptr );
	
	//cout<<skalar(w1ptr, w2ptr);
	//cout<<dl_Wektora( w1ptr );
	//Wypisz_wektor(wek3);Punkt p1,p2;
	PUNKT p1, p2, p3;
	p1.x = 1;
	p1.y = 1;
	
	p2.x = 4;
	p2.y = 4;
	
	
	
	double odl = sqrt(2.0);
	//cout<<odlP_P( p1 , p2 );
	//cout<<dl_Wektora( w1ptr );
	punkt_new( p1 , p2 , p3, odl );
	cout<< p3.x <<" "<<p3.y;
	return 0;
}
//=====================================

void Wypisz_punkt(PUNKT p1)
{
	cout<< p1.x <<" " <<p1.y<<endl;
	return;
}

void Wypisz_wektor(WEKTOR w1)
{
	cout<< w1.sklx <<" " <<w1.skly <<endl;
	return;
}


void P_P_W (PUNKT p1 , PUNKT p2, WEKTOR* wek1 )
{
	wek1->sklx =  p2.x-p1.x;
	wek1->skly =  p2.y-p1.y;
}

void W_add (WEKTOR* w1 , WEKTOR* w2, WEKTOR* w3 )
{
	w3->sklx =  w1->sklx+w2->sklx;
	w3->skly =  w1->skly+w2->skly;
}

void W_sub (WEKTOR* w1 , WEKTOR* w2, WEKTOR* w3 )
{
	w3->sklx =  w1->sklx-w2->sklx;
	w3->skly =  w1->skly-w2->skly;
}


int skalar (WEKTOR* w1 , WEKTOR* w2)
{
	double wynik = 0;
	wynik = (w1->sklx)*(w2->sklx)+(w1->skly)*(w2->skly);
	return wynik;
}

double odlP_P(PUNKT p1, PUNKT p2)
{
	double wynik;
	wynik = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
	return wynik;
}

double dl_Wektora(WEKTOR* w1)
{
	double wynik;
	wynik = sqrt((w1->sklx)*(w1->sklx)+(w1->skly)*(w1->skly));
	return wynik;
}

void punkt_new(PUNKT &p1, PUNKT &p2, PUNKT &p3, double odl)
{
	p3.x  = ((p2.x-p1.x)/odlP_P(p1,p2))*odl+p1.x;
	double b = p2.y - ((p2.x - p1.x)/(p2.y - p1.y))*p2.x;
	p3.y = ((p2.x - p1.x)/(p2.y - p1.y))*p3.x + b;
	return;
}
