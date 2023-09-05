#include <iostream>

int main()
{
    int N=0, i=0;

    std::cout << "PROGRAMA QUE PIDE NUMEROS HASTA QUE SE INGRESA EL CERO E IMPRIME EL MAYOR DE ELLOS\n\n";
    std::cout << "Ingrese los numeros:\n";
    std::cin >> i;

    while(i!= 0){
        std::cin >> i;
        if(i>N){
            N = i;
        }
    }

    std::cout << "\nEl numero mayor fue el " << N;

    return 0;
}