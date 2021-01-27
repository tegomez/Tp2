#ifndef TP_2_PRUEBA_TIERRA_H
#define TP_2_PRUEBA_TIERRA_H

#include "personaje.h"

class Tierra : public Personaje {
public:
    //Metodos

    //Contructor e inicializador
    Tierra(string nombre, int escudo, int vida, int energia);

    //POST: Suma 8 a la energia e informa al usuario con que fue alimentado
    //      y el estado de la energia actual
    void alimentarse();

    //POST: Imprime elemento, vida, escudo y energia
    void mostrar_datos();
};

#endif //TP_2_PRUEBA_TIERRA_H