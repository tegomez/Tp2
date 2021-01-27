#ifndef TP_2_PRUEBA_AIRE_H
#define TP_2_PRUEBA_AIRE_H

#include "personaje.h"

class Aire : public Personaje{
public:
    //Metodos

    //Contructor e inicializador
    Aire(string nombre, int escudo, int vida, int energia);

    //POST: Informa al usuario que los personajes de aire no se alimantan
    void alimentarse();

    //POST: Imprime los valores de escudo, vida, energia y el elemento del personaje
    void mostrar_datos();
};

#endif //TP_2_PRUEBA_AIRE_H