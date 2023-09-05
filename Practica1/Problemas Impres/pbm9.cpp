#include <iostream>

int main() {
    int N, digito, aux, pot, suma = 0;

    std::cout << "Ingrese el numero entero: ";
    std::cin >> N;

    while (N > 0) {
        digito = N % 10;
        aux = digito;
        pot = 1;
        for (int i = 0; i < aux; i++) {
            pot = pot * digito;
        }
        suma = suma + pot;
        N = N / 10;
    }
    
    std::cout << "El resultado de la suma es: " << suma;
    return 0;
}
