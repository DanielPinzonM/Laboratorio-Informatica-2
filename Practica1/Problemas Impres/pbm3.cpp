#include <iostream>

int main() {

    short int Mes;
    short int Dia;
    short int CantDiasMes[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    std::cout << "ALGORITMO QUE VERIFICA SI UNA FECHA DADA ES VALIDA\n\n";
    std::cout << "Ingrese el numero del mes: ";
    std::cin >> Mes;
    std::cout << "Ingrese el numero del dia del mes: ";
    std::cin >> Dia;

    if(Mes>0 && Mes<13){
        if(Dia>0 && Dia<=CantDiasMes[Mes-1]){
            if (Dia == 29 && Mes == 2){
                std::cout << Dia << "/" << Mes << " es una fecha valida en bisiesto";
            }
            else{
                std::cout << Dia << "/" << Mes << " es una fecha valida";
            }
        }
        else{
            std::cout << Dia << "/" << Mes << " es una fecha invalida";
        }
    }
    else{
        std::cout << Dia << "/" << Mes << " es una fecha invalida";
    }
    return 0;
}