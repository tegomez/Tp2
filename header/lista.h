#ifndef TP_2_PRUEBA_LISTA_H
#define TP_2_PRUEBA_LISTA_H

#include "nodo.h"

using namespace std;

class Lista {
private:
    //Atributos

    Nodo* primero;
    Nodo* actual;
    int cantidad;

public:
    //Metodos

    // Constructor
    //POST: Crea una lista vacia
    Lista();

    //Destructor
    //POST: libera la memoria
    virtual ~Lista();

    //POST: Inserta el dato d al final, incrementa cantidad en 1
    void alta(Dato d);

    //PRE: El personaje con ese nombre debe pertenecer a la lista
    //POST: Elimina el elemento con ese nombre, decrementa cantidad en 1
    void baja(string nombre);

    //PRE: La lista no debe estar vacia, 0 < pos <= cantidad
    //POST: Devuelve el dato que esta en pos
    Dato consulta(int pos);

    //POST: Devuelve verdadero si la lista esta vacia
    bool vacia();

    //PRE: El archivo csv tiene el formato correcto.
    //POST: Lee y carga los datos leidos
    void leer_archivo();

    //PRE: Recibe en string los datos del personaje a crear
    //POST: Crea los distintos personajes y los carga a la lista
    void cargar(string ele, string nom, string esc, string vida);

    //POST: Devuelve un entero con la cantidad de elementos de la lista
    int obtener_cantidad();

    //POST: Pone el puntero actual a la primer posicion
    void reiniciar();

    //POST: Devuelve true si el actual no apunta a NULL, false de lo contrario
    bool hay_siguiente();

    //PRE: Recibe un nombre de un personaje que pertenece a la lista
    //POST: Devuelve un entero con la posicion en la que se encuentra el personaje con ese nombre
    int posicion(string nombre);

    //PRE: La lista no debe estar vacia
    //POST: Imprime los nombres de los personajes almacenados
    void mostrar_nombres();

    //POST: Devuelve true si el nombre dado se encuentra en la lista
    bool se_encuentra(string nombre);

    // PRE: Hay_siguiente tiene que haber devuelto true previamente
    // POS: Devuelve el elemento actual y avanza
    Dato siguiente();

private:
    Nodo* obtener_nodo(int pos);

};

#endif //TP_2_PRUEBA_LISTA_H