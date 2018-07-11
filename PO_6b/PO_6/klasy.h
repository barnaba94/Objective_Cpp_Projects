#include <iostream>

using namespace std;

class Bazowa 
{
public:
	Bazowa()
	{
		cout<<"konstrukor bazowej"<<endl;
	}

	~Bazowa()
	{
		cout<<"Destruktor bazowej"<<endl;
	}

	void id()
	{
		cout <<"Bazowa"<<endl;
	}
};

class Pochodna : public Bazowa
{
public:
	Pochodna()
	{
		cout<<"Konstruktor pochodnej"<<endl;
	}

	~Pochodna()
	{
		cout<<"Destruktor pochodnej"<<endl;
	}

	void id()
	{
		cout<<"Pochodna"<<endl;
	}
};