#include <iostream>

int main()
{
    char N;

    std::cout << "PROGRAMA QUE CONVIERTE UNA LETRA MAYUSCULA A MINUSCULA Y VICEVERSA\n\n";
    std::cout << "Ingrese la letra a convertir: ";
    std::cin >> N;

    if(N<91 && N>64){
        N = N + 32;
        std::cout << "Letra convertida: " << N;
    }
    else if(N<123 && N>96){
        N = N - 32;
        std::cout << "Letra convertida: " << N;
    }
    else{
        std::cout << "(" << N << ") no es una letra";
    }

    return 0;
}