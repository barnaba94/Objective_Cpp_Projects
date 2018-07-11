// Szablony.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "Szablony.h"

int Matematyka::maxInt(int i, int j )
{
	if( i >= j )
		return i;
	return j;
}

template< typename T, typename A >
A Matematyka::max(T i, A j )
{
	if( i >= j )
		return i;
	return j;
}

int main(int argc, char** argv)
{
	std::cout<<Matematyka::maxInt(10, 19) <<std::endl;

	std::cout<<Matematyka::max<int, int>(19, 19.01) <<std::endl;
	std::cout<<Matematyka::max<float, float>(19, 19.01) <<std::endl;
	std::cout<<Matematyka::max<int, float>(19, 19.01) <<std::endl;
	std::cout<<Matematyka::max<float, int>(19, 19.01) <<std::endl;

	return 0;
}