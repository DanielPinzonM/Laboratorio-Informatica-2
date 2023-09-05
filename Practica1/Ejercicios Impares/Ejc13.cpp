#include <iostream>

int main()
{
    int N;

    std::cout << "PROGRAMA QUE CALCULA LOS DIVISORES DE UN NUMERO DADO Y LOS IMPRIME EN PANTALLA\n\n";
    std::cout << "Ingrese un numero para calcular sus divisores: ";
    std::cin >> N;

    std::cout << "\nLos divisores de " << N << " son: \n";
    for(int i = 1; i<=double(N/2); i++){
        if(N%i == 0){
            std::cout << i << "\n";
        }
    }
    std::cout << N;

    return 0;
}