#include <iostream>

int main() {
    
    char Espacio = ' ', Asterico = '*';
    int N;
    
    std::cout << "ALGORITMO QUE DIBUJA UN PATRON SEGUN UN NUMERO DADO\n\n";
    std::cout << "Ingrese un numero: ";
    std::cin >> N;
    std::cout << "\n"

    for(int i=1; i<=N; i+=2){
        for(int e=0; e<(N-i)/2; e++){
            std::cout << Espacio;
        }
        for(int Pn=0; Pn<i; Pn++){
            std::cout << Asterico;
        }
        for(int e=0; e<(N-i)/2; e++){
            std::cout << Espacio;
        }
        std::cout << "\n";
    }
    for(int i=N; i>1; i-=2){
        for(int e=0; e<=(N-i)/2; e++){
            std::cout << Espacio;
        }
        for(int Pn=2; Pn<i; Pn++){
            std::cout << Asterico;
        }
        for(int e=0; e<=(N-i)/2; e++){
            std::cout << Espacio;
        }
        std::cout << "\n";
    }
    return 0;
}