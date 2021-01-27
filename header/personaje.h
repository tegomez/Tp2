#ifndef TP_2_PRUEBA_PERSONAJE_H
#define TP_2_PRUEBA_PERSONAJE_H

#include <string>

using namespace std;

class Personaje {
protected:
    //Atributos

    string nombre;
    int vida;
    int escudo;
    int energia;

public:
    //Metodos

    //Constructor
    //POST: Crea al objeto personaje con sus atributos y la energia en 0
    Personaje(string nombre, int escudo, int vida, int energia);

    //POST: Asgina una energia al personaje entre 0 y 20
    int asignar_energia();

    virtual void alimentarse() = 0;

    virtual void mostrar_datos() = 0;

    //POST: Devuelve un string con el nombre del personaje
    virtual string mostrar_nombre();
};

#endif //TP_2_PRUEBA_PERSONAJE_H