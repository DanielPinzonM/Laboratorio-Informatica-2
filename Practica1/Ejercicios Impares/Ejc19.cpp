#include <iostream>

int main()
{
    int N, Validador=true;

    std::cout << "PROGRAMA QUE DETERMINA SI UN NUMERO ES PRIMO O NO\n\n";
    std::cout << "Ingrese el numero a evaluar: ";
    std::cin >> N;

    for(int i = 2; i<=double(N/2); i++){
        if(N%i == 0){
            Validador = false;
            break;
        }
    }

    if(Validador == true){
        std::cout << "\n" << N << " es un numero primo";
    }
    else{
        std::cout << "\n" << N << " no es un numero primo";
    }

    return 0;
}