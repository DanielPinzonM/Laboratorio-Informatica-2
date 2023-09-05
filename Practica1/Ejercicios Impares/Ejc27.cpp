#include <iostream>

int main()
{
    int Pn, Sn; 
    char Op;
    
    std::cout << "PROGRAMA QUE ACTUA COMO UNA CALCULADORA DE OPERACIONES DE SUMA, RESTA, MULTIPLICACION DE DOS NUMEROS\n\n";
    std::cout << "Ingrese cada elemento seguido de un enter:\n";
    std::cin >> Pn;
    std::cin >> Op;
    std::cin >> Sn;
    
    switch(Op){
        case 43:
            std::cout << Pn << Op << Sn << " = " << Pn+Sn;
            break;
        case 45:
            std::cout << Pn << Op << Sn << " = " << Pn-Sn;
            break;
        case 42:
            std::cout << Pn << Op << Sn << " = " << Pn*Sn;
            break;
        case 47:
            std::cout << Pn << Op << Sn << " = " << Pn/Sn;
            break;
        default:
            std::cout << "(" << Op << ") no es un operador valido";
    }

    return 0;
}