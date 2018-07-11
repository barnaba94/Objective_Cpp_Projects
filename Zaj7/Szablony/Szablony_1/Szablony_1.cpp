#include "Szablony_1.h"
#include <vector>

using namespace std;

template<typename T>
Wektor::Wektor(int x, int y)
{
	for (int i = 0; i < y; j++)
	{
		vector< T > row;
		for (int  j = 0; j < x; j++)
			row.push_back(i * j);
		a.push_back( row );
	}
}




int main()
{
	return 0;
}