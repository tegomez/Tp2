#include <fstream>
#include <iostream>
#include <string>
#include "lista.h"
#include "personaje.h"
#include "agua.h"
#include "aire.h"
#include "fuego.h"
#include "tierra.h"

const string PATH = "../personajes.csv";

Lista::Lista() {
    primero = 0;
    actual = 0;
    cantidad = 0;
}

Lista::~Lista() {
    Nodo* nodo = this->primero;
    while (nodo){
        Nodo* aux = nodo;
        nodo = nodo->siguiente;
        delete aux;
    }

    reiniciar();
}

void Lista::leer_archivo() {
    ifstream file;
    file.open(PATH);

    if (!file){
        cout << "No puede leerse el archivo" <<endl;
    } else{

        string elemento;
        string nombre;
        string escudo;
        string vida;

        while (file.good()){
            getline(file, elemento, ',');
            getline(file, nombre, ',');
            getline(file, escudo, ',');
            getline(file, vida, '\n');

            cargar(elemento, nombre, escudo, vida);
        }
        file.close();
    }
}

void Lista::cargar(string elemento, string nombre, string escudo, string vida) {
    int escudo1 = stoi(escudo);
    int vida1 = stoi(vida);
    int energia = 0;

    Personaje *de_agua;
    Personaje *de_fuego;
    Personaje *de_aire;
    Personaje *de_tierra;

        if (elemento == "agua") {
            de_agua = new Agua(nombre, escudo1, vida1, energia);
            alta(de_agua);
            de_agua->asignar_energia();
        } else if (elemento == "aire") {
            de_aire = new Aire(nombre, escudo1, vida1, energia);
            alta(de_aire);
            de_aire->asignar_energia();
        } else if (elemento == "fuego") {
            de_fuego = new Fuego(nombre, escudo1, vida1, energia);
            alta(de_fuego);
            de_fuego->asignar_energia();
        } else if (elemento == "tierra") {
            de_tierra = new Tierra(nombre, escudo1, vida1, energia);
            alta(de_tierra);
            de_tierra->asignar_energia();
        }
}

void Lista::alta(Dato d) {
    Nodo* nuevo = new Nodo(d);
    if (cantidad == 0) {
        nuevo->asignar_siguiente(primero);
        primero = nuevo;
        reiniciar();
    }
    else {
        Nodo* anterior = obtener_nodo(cantidad);
        Nodo* sig = anterior->obtener_siguiente();
        nuevo->asignar_siguiente(sig);
        anterior->asignar_siguiente(nuevo);
    }
    cantidad++;
}

bool Lista::vacia() {
    return (cantidad == 0);
}

void Lista::baja(string nombre) {
    Nodo* borrar;
    int pos = posicion(nombre);

    if (pos == 1){
        borrar = primero;
        primero = borrar->obtener_siguiente(); //primero salta al sigueinte elemento
    } else{
        Nodo* anterior = obtener_nodo(pos - 1);
        borrar = anterior->obtener_siguiente();
        Nodo* siguiente = borrar->obtener_siguiente();
        anterior->asignar_siguiente(siguiente);
    }
    delete borrar;
    reiniciar();
    cantidad--;
}

Dato Lista::consulta(int pos) {
    Nodo* aux = obtener_nodo(pos);
    return aux->obtener_dato();
}

int Lista::obtener_cantidad() {
    return cantidad;
}

void Lista::reiniciar() {
    actual = primero;
}

bool Lista::hay_siguiente() {
    return (actual != 0);
}

bool Lista::se_encuentra(string nombre){
    Personaje * personaje;
    bool encontrado = false;

    reiniciar();

    while (hay_siguiente() && ! encontrado) {
        if (siguiente()->mostrar_nombre() == nombre)
            encontrado = true;
    }

    return encontrado;
}

int Lista::posicion(string nombre) {
    bool encontrado = false;
    int pos = 0;

    reiniciar();

    while (hay_siguiente() && ! encontrado) {
        if (siguiente()->mostrar_nombre() == nombre) {
            encontrado = true;
        }
        pos ++;
    }
    return pos;
}

void Lista::mostrar_nombres() {
    Personaje *personaje;

    for (int i = 1; i <= obtener_cantidad(); i++) {
        personaje = consulta(i);
        cout << "-" << personaje->mostrar_nombre() << endl;
    }
}

Dato Lista::siguiente() {
    Nodo* aux = actual;

    actual = actual->obtener_siguiente();

    return aux->obtener_dato();
}

Nodo *Lista::obtener_nodo(int pos) {
    Nodo* aux = primero;

    for(int i = 1; i < pos; i++) {
        aux = aux->obtener_siguiente();
    }

    return aux;
}