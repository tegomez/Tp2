#ifndef TP_2_PRUEBA_FUEGO_H
#define TP_2_PRUEBA_FUEGO_H

#include "personaje.h"

class Fuego : public Personaje{
public:
    //Metodos

    //Constructor e inicializado
    Fuego(string nombre, int vida, int escudo, int energia);

    //POST: Suma 15 a la vida e informa la vida actual y con que fue alimentado
    void alimentarse();

    //POST: Imprime los valores de escudo, vida, energia y el elemento del personaje
    void mostrar_datos();

};

#endif //TP_2_PRUEBA_FUEGO_H