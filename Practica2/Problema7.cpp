#include <iostream>

void eliminarRepetidos(char str[]);


int main() {
    char str[30];

    // Solicita al usuario que introduzca una cadena de caracteres
    std::cout << "Introduce una cadena de caracteres: ";
    std::cin >> str;

    // Llama a la función eliminarRepetidos para eliminar los caracteres repetidos
    eliminarRepetidos(str);

    return 0;
}


void eliminarRepetidos(char str[]) {
    int n = 0;  // Longitud de la cadena
    while (str[n] != '\0') n++;

    std::cout << "Original: " << str;

    // Recorre cada carácter de la cadena
    for (int i = 0; i < n; i++) {
        // Comprueba si str[i] ya está presente
        for (int j = i + 1; j < n;) {
            if (str[i] == str[j]) {
                // Si se encuentra un carácter repetido, elimínalo
                for (int k = j; k < n - 1; k++)
                    str[k] = str[k + 1];
                n--;
            } else {
                j++;
            }
        }
    }

    // Muestra la cadena sin caracteres repetidos
    std::cout << ". Sin repetidos: ";
    for (int i = 0; i < n; i++){
        std::cout << str[i];
    }
}