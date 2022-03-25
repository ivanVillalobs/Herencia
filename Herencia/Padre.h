#pragma once
#include <iostream>
#include "Abuelo.h"
using namespace std;
class Padre : public Abuelo
{
public:
	Padre(int);
	string nombre_padre;
	int edad;
protected:
};