#include <iostream>

#include "cMotorJuego.h"

int main()
{
    cMotorJuego juego(25, 25);
    juego.PrintNivel();
    juego.LoopDeJuego();
    
    

    return 0;
}

