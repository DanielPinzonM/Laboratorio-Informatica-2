#include <iostream>

const short int FILAS = 15;
const short int ASIENTOS = 20;
char salaCine[FILAS][ASIENTOS];

void inicializarSala();
void mostrarSala();
void reservarAsiento(int fila, short int asiento);
void cancelarReserva(int fila, short int asiento);

int main() {
    inicializarSala();
    char opcion, fila;
    short int asiento;

    do {
        std::cout << "\n\n\n";
        std::cout << "Bienvenido al sistema de reservas del cine. Por favor, elige una opcion:\n";
        std::cout << "1. Mostrar sala\n";
        std::cout << "2. Reservar asiento\n";
        std::cout << "3. Cancelar reserva\n";
        std::cout << "4. Salir\n";
        std::cin >> opcion;

        switch(opcion) {
        case '1':
            mostrarSala();
            break;
        case '2':
            std::cout << "Por favor, ingresa la fila (A-O) y el numero de asiento (1-20) que deseas reservar:\n";
            std::cin >> fila >> asiento;
            reservarAsiento(int(fila-65), asiento-1);
            break;
        case '3':
            std::cout << "Por favor, ingresa la fila (A-O) y el numero de asiento (1-20) cuya reserva deseas cancelar:\n";
            std::cin >> fila >> asiento;
            cancelarReserva(int(fila-65), asiento-1);
            break;
        case '4':
            std::cout << "Gracias por usar nuestro sistema de reservas.\n";
            break;
        default:
            std::cout << "Opcion no valida. Por favor, intenta de nuevo.\n";
        }
    } while(opcion != '4');

    return 0;
}

void inicializarSala() {
    for(short int i=0; i<FILAS; i++) {
        for(short int j=0; j<ASIENTOS; j++) {
            salaCine[i][j] = '-';
        }
    }
}

void mostrarSala() {
    for(short int i=0; i<FILAS; i++) {
        for(short int j=0; j<ASIENTOS; j++) {
            std::cout << salaCine[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void reservarAsiento(int fila, short int asiento) {
    if(salaCine[fila][asiento] == '-') {
        salaCine[fila][asiento] = '+';
        std::cout << "\n\n\n" << "Reserva realizada con exito." << "\n";
    } else {
        std::cout << "\n\n\n" << "El asiento ya esta reservado." << "\n";
    }
}

void cancelarReserva(int fila, short int asiento) {
    if(salaCine[fila][asiento] == '+') {
        salaCine[fila][asiento] = '-';
        std::cout << "\n\n\n" << "Reserva cancelada con exito." << "\n";
    } else {
        std::cout << "\n\n\n" << "El asiento no esta reservado." << "\n";
    }
}