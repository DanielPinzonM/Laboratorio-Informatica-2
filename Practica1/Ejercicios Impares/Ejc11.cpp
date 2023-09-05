#include <iostream>

int main()
{
    double N;

    std::cout << "PROGRAMA QUE IMPRIME LA TABLA DE MULTIPLICACIONES DE UN NUMERO N DADO\n\n";
    std::cout << "Ingrese el numero para imprimir su tabla de multiplicar: ";
    std::cin >> N;

    for(int i = 1; i<11; i++){
        std::cout << "\n" i << "x" << N << " = " << i*N;
    }

    return 0;
}