#ifndef TP_2_PRUEBA_NODO_H
#define TP_2_PRUEBA_NODO_H

#include <iostream>
#include <string>
#include "personaje.h"

typedef Personaje* Dato;

class Nodo {
private:
    Dato dato; //Dato a almacenar

public:
    //Constructor
    //POST: Crea un nodo con el dato d y el puntero siguiente a NULL
    Nodo(Dato d);

    void asignar_dato(Dato d); // ya que inicialice el nodo con un dato cualquiera

    //POST: El puntero al siguiente nodo apuntara a ps
    void asignar_siguiente(Nodo * ps);

    //POST: Devuelve el dato que contiene el nodo
    Dato obtener_dato();

    //POST: Devuelve el puntero al siguiente nodo
    Nodo * obtener_siguiente();

    //puntero al nodo siguiente
    Nodo* siguiente;

    //Destructor
    //POST: Libera la memoria de Dato
    ~Nodo();

};


#endif //TP_2_PRUEBA_NODO_H
