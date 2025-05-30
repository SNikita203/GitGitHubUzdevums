#include <iostream>
#include "Name.h"
#include "Andrejs.h"

using namespace std;

Andrejs::Andrejs(string a)
{
	name=a;
}

void Andrejs::setName(string a)
{
	name=a;
}

void Andrejs::Print() const
{
	cout << name << endl;
}


