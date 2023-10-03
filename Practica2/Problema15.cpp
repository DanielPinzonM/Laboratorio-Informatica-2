#include <iostream>

void interseccion(short int A[4],short int B[4],short int (&C)[4]) {
    C[0] = std::max(A[0], B[0]);
    C[1] = std::max(A[1], B[1]);
    C[2] = std::min(A[0] + A[2], B[0] + B[2]) - C[0];
    C[3] = std::min(A[1] + A[3], B[1] + B[3]) - C[1];

    if (C[2] < 0 || C[3] < 0) {
        // No hay intersección
        C[2] = 0;
        C[3] = 0;
    }
}

int main() {
    short int A[4];
    short int B[4];
    short int C[4];

    std::cout << "Ingrese los datos del primer rectangulo:\n";

    for (short int i=0;i<4;i++){
        std::cin >> A[i];
    }

    std::cout << "\nIngrese los datos del segundo rectangulo:\n";

    for (short int i=0;i<4;i++){
        std::cin >> B[i];
    }

    interseccion(A, B, C);

    std::cout << "\nEl rectangulo de interseccion es: {" << C[0] << ", " << C[1] << ", " << C[2] << ", " << C[3] << "}";

        return 0;
}