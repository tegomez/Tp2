#include "menu.h"
#include <iostream>
#include "lista.h"
#include <cstdlib>
#include "agua.h"

using namespace std;

void Menu:: alimentar(Lista &lista) {
    Personaje * personaje;
    string nombre;

    cout << "¿A que personaje desea alimentar?:  ";
    cin >> nombre;
    while (!lista.se_encuentra(nombre)){
        cout << "Personaje no encontrado" << endl;
        cout << "Ingrese otro personaje: ";
        cin >> nombre;
    }
    cout << endl;
    int pos = lista.posicion(nombre);
    personaje = lista.consulta(pos);
    personaje->alimentarse();
}

string Menu::mayuscula (string cadena){
    for (int i = 0; i < cadena.length(); i++){
        cadena[i] = toupper(cadena[i]);
    }
    return cadena;
}

void Menu::buscar(Lista &lista) {
    Personaje* personaje;
    string nombre;

    cout << "Ingrese el nombre del personaje para obtener los detalles: ";
    cin >> nombre;

    while (!lista.se_encuentra(nombre)) {
        cout << "El personaje no se encuentra, ingreselo nuevamente: ";
        cin >> nombre;
    }
    int pos = lista.posicion(nombre);
    personaje = lista.consulta(pos);
    cout << "\n" << mayuscula(nombre) << endl;
    personaje->mostrar_datos();
}

void Menu::mostrar(Lista &lista) {
    cout << "PERSONAJES: " << endl;

    lista.mostrar_nombres();
}

void Menu::eliminar(Lista &lista) {
    string eliminar;

    cout << "Escriba el nombre del personaje que desea eliminar: ";
    cin >> eliminar;

    if(!lista.vacia() && lista.se_encuentra(eliminar)){
        lista.baja(eliminar);
        cout << "Personaje eliminado" << endl;
    } else{
        cout << "El personaje no se encuentra" << endl;
    }
}

string Menu::validar_elemento(string elemento){
    while (elemento != "agua" && elemento != "aire" && elemento != "fuego" && elemento != "tierra" ){
        cout << "Elemento no valido! " << endl;
        cout << "Ingrese el elemento del personaje: ";
        cin >> elemento;
    }
    return elemento;
}

void Menu::agregar(Lista &lista) {

    string elemento, nombre, escudo, vida;

    cout << "Ingrese el elemento del personaje: ";
    cin >> elemento;

    validar_elemento(elemento);

    cout << "Ingrese el nombre del personaje: ";
    cin >> nombre;

    int escudo1 = rand()%3;
    int vida1 = 10+rand()%(101-10);

    escudo = to_string(escudo1);
    vida = to_string(vida1);

    lista.cargar(elemento, nombre, escudo, vida);

    cout << "Personaje creado con exito" << endl;
}

int Menu::pedir_opcion() {
    int opcion;
    cout << "\nINGRESE UNA OPCION: ";
    cin >> opcion;
    return opcion;
}

void Menu::mostrar_opciones(){
    cout << "\nMENU DE OPCIONES" << endl;
    cout << "-----------------" << endl;
    cout << "1) Agregar un personaje" << endl;
    cout << "2) Eliminar un personaje"<< endl;
    cout << "3) Mostrar personajes" << endl;
    cout << "4) Buscar personaje" << endl;
    cout << "5) Alimentar personaje" << endl;
    cout << "6) Salir" << endl;
}

void Menu::procesar_opcion(Lista &lista) {
    int opcion;
    Menu menu;
    do {
        mostrar_opciones();
        opcion = pedir_opcion();

        switch (opcion)
        {
            case 1:
                cout << "\nOpcion 1" << endl;
                menu.agregar(lista);
                break;
            case 2:
                cout << "\nOpcion 2" << endl;
                menu.eliminar(lista);
                break;
            case 3:
                cout << "\nOpcion 3" << endl;
                menu.mostrar(lista);
                break;
            case 4:
                cout << "\nOpcion 4" << endl;
                menu.buscar(lista);
                break;
            case 5:
                cout << "\nOpcion 5" << endl;
                menu.alimentar(lista);
                break;
            case 6:
                cout << "Saliste del programa" << endl;
                break;
            default: cout << "Opcion no valida" << endl;
                break;
        }
    } while (opcion != 6);
}

Menu::Menu() {}
