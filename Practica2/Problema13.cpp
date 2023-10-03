#include <iostream>
using namespace std;

const short int FILAS = 6;
const short int COLUMNAS = 8;

short int contarEstrellas(short int (*matriz)[COLUMNAS]) {
    short int numEstrellas = 0;
    float Condicion = 0;

    for(short int i=1; i<FILAS-1; i++) {
        for(short int j=1; j<COLUMNAS-1; j++) {
            Condicion = float(matriz[i][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i-1][j] + matriz[i+1][j]) / 5;
            if(Condicion > 6) {
                numEstrellas++;
            }
        }
    }

    return numEstrellas;
}

int main() {
    short int imagen[FILAS][COLUMNAS] = {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8 ,0}
    };

    short int numEstrellas = contarEstrellas(imagen);
    cout << "Numero de estrellas encontradas en la imagen: " << numEstrellas << endl;

        return 0;
}