#include <iostream>
#include "Hijo.h"

using namespace std;
Hijo p(20);

int main() {

	cout << "Ingrece el nombre del padre" << endl;
	cin >> p.nombre_padre;

	cout << "ingrece el nombre del hijo" << endl;
	cin >> p.nombre_hijo;

	cout << "ingrece el nombre del Abuelo" << endl;
	cin >> p.nombre_abuelo;

	cout << "ingrece el nombre del Hermano" << endl;
	cin >>p.nombre_hermano;

	cout << "Nombre de mi gfe: " << p.nombre_padre << endl;
	cout << "Edad de mi gfe: " << p.edad << endl;
	cout << "Nombre de mi krnal: " << p.nombre_hijo << endl;
	cout << "Edad de mi krnal: " << p.calc_edad() << endl;;
	cout << "nombre del abuelo: " << p.nombre_abuelo << endl;
	cout << "nombre del Hermano: " << p.nombre_hermano << endl;

	return 0;
} 
/*profe, dado que la clase de la explicacion de la terea me fue imposible entrar a la clase, solo supe que teniamos que
hacer un programa con herencia, espero que con esto funcione y no me vaya a torcer :) */