#include <iostream>

int main() {
    int n, int MCM = 1, contador = 1, divisible = true;

    std::cout << "Ingrese el numero: ";
    std::cin >> n;

    while (true) {
        divisible = true;
        for (int i = 1; i <= n; i++) {
            if (MCM % i != 0) {
                divisible = false;
                break;
            }
        }
        if (divisible) {
            break;
        } else {
            contador++;
            MCM = contador * n;
        }
    }

    std::cout << "El minimo comun multiplo (MCM) es: " << MCM;
    return 0;
}
