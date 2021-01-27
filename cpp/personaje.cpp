#include "personaje.h"
#include <cstdlib>

Personaje::Personaje(string nombre, int escudo, int vida, int energia) {
    this->nombre = nombre;
    this->escudo = escudo;
    this->vida = vida;
    this->energia = 0;
}

int Personaje::asignar_energia() {
    return (energia = rand()%21);
}

string Personaje::mostrar_nombre() {
    return nombre;
}

