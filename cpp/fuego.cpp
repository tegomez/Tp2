#include "fuego.h"
#include <iostream>

void Fuego::alimentarse() {
    vida = vida + 15;
    cout << "Alimentado con madera" << endl;
    cout << "Vida actual: " << vida << endl;
}

void Fuego::mostrar_datos() {
    cout << "-Elemento: Fuego" << endl;
    cout << "-Vida: " << vida << endl;
    cout << "-Escudo: " << escudo << endl;
    cout << "-Energia: " << energia << endl;
}

Fuego::Fuego(string nombre, int vida, int escudo, int energia) : Personaje(nombre, vida, escudo, energia) {}
