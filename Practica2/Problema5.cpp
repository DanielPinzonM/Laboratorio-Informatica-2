#include <iostream>

short int LongN(short int Numero);
void ConverIntToChar(short int* Numero, char* Cadena);

// Main
int main() {

    short int Numero;
    short int Tamanio;

    std::cout << "Ingrese un numero para convertir: ";
    std::cin >> Numero;

    Tamanio = LongN(Numero);
    char Cadena[Tamanio]={};

    ConverIntToChar(&Numero, Cadena);

    for (short int i=Tamanio;i>0;i--){
        std::cout << Cadena[i-1];
    }

    return 0;
}

void ConverIntToChar(short int* Numero, char* Cadena){

    char newChar;
    while(*Numero != 0){

        switch(*Numero%10){
        case 0:
            newChar =+ '0';
            break;
        case 1:
            newChar =+ '1';
            break;
        case 2:
            newChar =+ '2';
            break;
        case 3:
            newChar =+ '3';
            break;
        case 4:
            newChar =+ '4';
            break;
        case 5:
            newChar =+ '5';
            break;
        case 6:
            newChar =+ '6';
            break;
        case 7:
            newChar =+ '7';
            break;
        case 8:
            newChar =+ '8';
            break;
        case 9:
            newChar =+ '9';
            break;
        }

        *Cadena=newChar;
        Cadena+=1;
        *Numero /= 10;
    }
}

short int LongN(short int Numero){

    short int Long=0;

    while(Numero != 0){
        Numero /=  10;
        Long+=1;
    }

    return Long;
}