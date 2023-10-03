#include <iostream>

void calcular(int cantidad);

// Main
int main() {
    int cantidad;

    std::cout << "Programa que determina la minima combiancion de billetes y monedas para una cantidad dada.\n";
    std::cout << "Ingrese la cantidad de dinero: ";
    std::cin >> cantidad;
    std::cout << "\n";

    calcular(cantidad);

    return 0;
}


// Función para calcular la mínima combinación de billetes y monedas
void calcular(int cantidad) {

    int denominaciones[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int numDenominaciones[sizeof(denominaciones)/sizeof(denominaciones[1])] = {0};

    // Se recorre cada denominación
    for (int i = 0; i < sizeof(denominaciones)/sizeof(denominaciones[1]); i++) {
        if (cantidad >= denominaciones[i]) {
            numDenominaciones[i] = cantidad / denominaciones[i];
            cantidad -= numDenominaciones[i] * denominaciones[i];
        }
    }

    // Iprimir el resultado
    for (int i = 0; i < sizeof(denominaciones)/sizeof(denominaciones[1]); i++) {
        std::cout << denominaciones[i] << ": " << numDenominaciones[i] << "\n";
    }

    if (cantidad > 0) {
        std::cout << "Faltante: " << cantidad << "\n";
    }
}
