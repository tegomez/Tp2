#include "tierra.h"
#include <iostream>

void Tierra::alimentarse() {
    energia = energia + 8;
    cout << "Alimentado con Hierbas" << endl;
    cout << "Energia actual: " << energia << endl;
}

Tierra::Tierra(string nombre, int vida, int escudo, int energia) : Personaje(nombre, vida, escudo, energia) {}

void Tierra::mostrar_datos() {
    cout << "-Elemento: Tierra" << endl;
    cout << "-Vida: " << vida << endl;
    cout << "-Escudo: " << escudo << endl;
    cout << "-Energia: " << energia << endl;
}
