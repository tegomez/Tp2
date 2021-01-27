#ifndef TP_2_PRUEBA_MENU_H
#define TP_2_PRUEBA_MENU_H

#include "lista.h"

class Menu {
private:
    //Atributos
    Personaje *personaje;

public:
    //Metodos

    //Contructor
    //POST:
    Menu();

    //PRE:
    //POST: Solicita una opcion al usuario y la devuelve
    int pedir_opcion();

    //PRE:
    //POST:
    void procesar_opcion(Lista &lista);

    string validar_elemento(string elemento);

    //PRE:
    //POST: Solicita los datos del personaje a agregar, asigna valores random de vida y escudo
        // y carga el personaje a la lista
    void agregar(Lista &lista);

    //POST: Valida que la lista no este vacia y el personaje se encuentre y luego lo da de baja
    void eliminar(Lista &lista);

    //PRE: la lista no debe estar vacia
    //POST: Muestra una lista con los nombres de los personajes
    void mostrar(Lista &lista);

    //POST: Pasa a mayuscula el string dado
    string mayuscula(string cadena);

    //PRE: El personaje buscado debe estar en la lista
    //POST: Imprime los detalles del personaje buscado
    void buscar(Lista &lista);

    //POST: Verifica que la lista no este vacia y el personaje se encuentre y lo alimenta
    void alimentar(Lista &lista);

    //POST: Imprime las opciones del menu
    void mostrar_opciones();
};

#endif //TP_2_PRUEBA_MENU_H
