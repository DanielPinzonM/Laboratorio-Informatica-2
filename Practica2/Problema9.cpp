#include <iostream>

int CalcularSuma(int* Numero,short int* NumC);
int ownpow(short int base, short int expo);

int main() {
    short int NumC;
    int N;
    std::cout << "Ingrese el numero de cifras: ";
    std::cin >> NumC;
    std::cout << "Ingrese la cadena de caracteres numericos: ";
    std::cin >> N;

    NumC = ownpow(10, NumC);

    std::cout << "Origina: " << N << " Suma: " << CalcularSuma(&N,&NumC) << "\n";

    return 0;
}

int CalcularSuma(int* Numero,short int* NumC) {

    int suma=0;

    while(*Numero != 0){
        suma += *Numero%*NumC;
        *Numero = *Numero/(*NumC);
    }
    return suma;
}

int ownpow(short int base, short int expo){
    int r = base;
    if (expo !=0){
        for(short int i = 1; i <expo; i++){
            r *= base;
        }
    }
    else{
        return 1;
    }
    return r;
}