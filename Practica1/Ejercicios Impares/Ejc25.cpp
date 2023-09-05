#include <iostream>

int main()
{
    int N, cont;

    std::cout << "PROGRAMA QUE CALCULA EL NUMERO DE DIGITOS DE UN NUMERO\n\n";
    std::cout << "Ingrese el numero a evaluar: ";
    std::cin >> N;
    
    std::cout << "\nEl numero" << N;
    
    while(N>=1){
        cont++;
        N = N/10;
    }
    
    std::cout << " tiene " << cont << " digitos";
    
    return 0;
}