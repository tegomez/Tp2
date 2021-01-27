#include "nodo.h"

Nodo::Nodo(Dato d) {
    dato = d;
    siguiente = 0;
}

Dato Nodo::obtener_dato() {
    return dato;
}

void Nodo::asignar_siguiente(Nodo *ps) {
    siguiente = ps;
}

Nodo *Nodo::obtener_siguiente() {
    return siguiente;
}

void Nodo::asignar_dato(Dato d) {
    dato = d;
}

Nodo::~Nodo() {
    delete dato;
}
