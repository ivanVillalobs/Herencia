#pragma once
#include "Padre.h"
#include "Hermano.h"
class Hijo : public Padre, public Hermano
{
public:
	Hijo(int);
	string nombre_hijo;
	int calc_edad();
protected:
};