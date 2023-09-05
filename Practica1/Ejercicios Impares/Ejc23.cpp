#include <iostream>

int main()
{
    int Pn, Sn, R, A1, A2;

    std::cout << "PROGRAMA QUE CALCULA EL MINIMO COMUN MULTIPLO ENTRE DOS NUMEROS DADOS\n\n";
    std::cout << "Ingrese el primer numero: ";
    std::cin >> Pn;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> Sn;
    
    R = Sn;
    A1 = Pn;
    A2 = Sn;
    
    while(R != 0){
        R = (A1%A2);
        A1 = A2;
        A2 = R;
    }
    
    std::cout << "\nEl MCM de " << Pn << "y" << Sn << "es " << ((Pn*Sn)/A1);
    
    return 0;
}