#include <iostream>

int main()
{
    int N, i=0;

    std::cout << "PROGRAMA QUE PIDE NUMEROS HASTA QUE SE INGRESA EL CERO Y REALIZA LA SUMATORIA DE ELLOS\n\n";
    std::cout << "Ingrese los numeros:\n";
    std::cin >> i;

    N = i;

    while(i!= 0){
        std::cin >> i;
        N = N + i;
    }

    std::cout << "\nEl resultado de la sumatoria de los numeros ingresados es: " << N;

    return 0;
}