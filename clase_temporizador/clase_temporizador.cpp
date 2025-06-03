#include <iostream>
#include <ctime>

class Temporizador 
{
private:
    clock_t t_inicio;
    clock_t t_anterior;

public:
    Temporizador() {
        t_inicio = clock();
        t_anterior = t_inicio;
    }

    void reiniciar() {
        t_inicio = clock();
        t_anterior = t_inicio;
    }

    float tiempoDesdeInicio() {
        return float(clock() - t_inicio) / CLOCKS_PER_SEC;
    }

    float tiempoDelta() {
        clock_t t_actual = clock();
        float delta = float(t_actual - t_anterior) / CLOCKS_PER_SEC;
        t_anterior = t_actual;
        return delta;
    }
};

int main() {
    Temporizador reloj;

    while (true) {
        float dt = reloj.tiempoDelta();

        std::cout << "Delta time: " << dt << " segundos\n";

        // Pausa básica: esperar un poco (simula un frame)
        for (volatile int i = 0; i < 10000000; i++); // Espera "manual" (no precisa)
    }

    return 0;
}