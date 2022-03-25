#include "Hijo.h"

Hijo::Hijo(int x) :Padre(x)
{
}

int Hijo::calc_edad() {
	return edad / 2;
}