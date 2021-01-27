
#include "aire.h"
#include <iostream>

using namespace std;

void Aire::alimentarse() {
    cout << "Los personajes de aire no necesitan ser alimentados" << endl;
}

Aire::Aire(string nombre, int escudo, int vida, int energia) : Personaje(nombre, vida, escudo, energia) {}

void Aire::mostrar_datos() {
    cout << "-Elemento: Aire" << endl;
    cout << "-Vida: " << vida << endl;
    cout << "-Escudo: " << escudo << endl;
    cout << "-Energia: " << energia << endl;
}
