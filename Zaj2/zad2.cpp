#include <iostream>
#include <stdio.h>
#include <string.h>

struct Data
{
	int rok;
	int miesiac;
	int dzien;
};

typedef struct Data newData;
 
int Wczytaj(newData &p)
{
	printf("Podaj date RRRR-MM-DD: \n");
	scanf("%4d-%2d-%2d",&p.rok,&p.miesiac,&p.dzien);
	return 0;
}

int Init(newData &p)
{
	p.rok = 1970;
	p.miesiac = 1;
	p.dzien = 1;
	return 0;
}

int Wypisz_val(newData p)
{
	printf("%4d-%02d-%02d \n", p.rok, p.miesiac, p.dzien);
	return 0;
}

int Wypisz_ref(newData &p)
{
	printf("%4d-%02d-%02d \n", p.rok, p.miesiac, p.dzien);
	return 0;
}
int Wypisz_cref(const newData &p)
{
	printf("%4d-%02d-%02d \n", p.rok, p.miesiac, p.dzien);
	return 0;
}

int main(int argc, char** argv)
{
	newData p;
	Init( p );
	Wypisz_val( p );
	Wczytaj( p );
	Wypisz_val( p );
	Wypisz_ref( p );
	Wypisz_cref( p );	
	return 0;
}
