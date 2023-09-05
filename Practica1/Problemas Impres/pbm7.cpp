#include <iostream>

int main() {
    int Limit, Pn = 1, Sn = 1, N, suma = 0;

    std::cout << "PROGRAMA QUE SUMA LOS NUMEROS PARES DE LA SERIE DE FIBONACCI HASTA UN NUMERO DADO\n\n";
    std::cout << "Ingrese el numero limite: ";
    std::cin >> Limit;

    while (Pn < Limit) {
        if (Pn % 2 == 0) { 
            suma = suma + Pn; 
        }
        N = Pn + Sn;
        Pn = Sn; 
        Sn = N;
    }

    std::cout << "El resultado de la suma es " << suma;
    return 0;
}