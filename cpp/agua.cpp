#include "agua.h"
#include <iostream>

using namespace std;

void Agua::alimentarse() {
    veces_alimentado ++;
    if (veces_alimentado <= 3){
        energia = energia + 10;
    }
    cout << "Alimentado con Plancton" << endl;
    cout << "Energia actual: " << energia << endl;
}

Agua::Agua(string nombre, int vida, int escudo, int energia) : Personaje(nombre, vida, escudo, energia) {}

void Agua::mostrar_datos() {
    cout << "-Elemento: Agua" << endl;
    cout << "-Vida: " << vida << endl;
    cout << "-Escudo: " << escudo << endl;
    cout << "-Energia: " << energia << endl;
}


