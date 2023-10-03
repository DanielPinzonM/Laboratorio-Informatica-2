#include <iostream>

short int longitudCadena(char []);
bool compararCadenas(char cadena1[], char cadena2[]);

// Main
int main() {
    char cadena1[30], cadena2[30];

    std::cout << "Programa que compara dos cadenas de caracteres y determina si son iguales.\n";

    std::cout << "Ingrese la primera cadena: ";
    std::cin >> cadena1;

    std::cout << "Ingrese la segunda cadena: ";
    std::cin >> cadena2;

    if (compararCadenas(cadena1, cadena2)) {
        std::cout << "\nLas cadenas son iguales." << "\n";
    } else {
        std::cout << "\nLas cadenas no son iguales." << "\n";
    }

    return 0;
}


// Función para comparar dos cadenas
bool compararCadenas(char cadena1[], char cadena2[]) {

    // Comprobamos si las longitudes son iguales
    if (longitudCadena(cadena1) != longitudCadena(cadena2)) {
        return false;
    }

    short int longitud;
    longitud = longitudCadena(cadena1);

    // Comparamos las cadenas
    for (short int i = 0; i < longitud; i++) {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
    }

    return true;
}

short int longitudCadena(char Cadena[]){

    short int Long = 0;

    for(short int j=0; Cadena[j] != '\0'; j++){
        Long += 1;
    }

    return Long;
}