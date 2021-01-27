#ifndef TP_2_PRUEBA_AGUA_H
#define TP_2_PRUEBA_AGUA_H

#include "personaje.h"

class Agua : public Personaje{
private:
    //Atributos

    //solo puede alimentarse 3 veces
    int veces_alimentado = 0;

public:
    //Metodos

    //Contructor e inicializador
    Agua(string nombre, int vida, int escudo, int energia);

    //PRE: veces_alimentad <= 3
    //POST: Incrementa veces_alimentado en 1, suma 10 a la energia
    //      e imprime el estado actual de la energia y con que se alimento
    void alimentarse();

    //POST: Imprime los valores de escudo, vida, energia y el elemento del personaje
    void mostrar_datos();

};

#endif //TP_2_PRUEBA_AGUA_H
