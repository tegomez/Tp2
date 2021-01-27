#include "menu.h"
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(nullptr));

    Lista lista;
    Menu menu;

    lista.leer_archivo();
    menu.procesar_opcion(lista);
    return 0;
}
