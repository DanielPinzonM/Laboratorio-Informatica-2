#include <iostream>

int main()
{
    char symb;
    int max = 100, min=  0, mid = 50;
    
    std::cout << "PROGRAMA QUE ADIVINA UN NUMERO DE ENTRE 0 Y 100\n\n";
    std::cout << "Se iran mostrando numeros entre 0 a 100 en pantalla, con los simbolos >, < y = indica si tu numero es mayor, menor o igual.";
    
    do{
        
        std::cout << "\n" << mid;
        std::cin >> symb;
        
        if(symb == 62){
            min = mid;
            mid = (max + min)/2;
        }
        else if(symb == 60){
            max = mid;
            mid = (max + min)/2;
        }
        else if(symb == 61){
            break;
        }
        else{
            std::cout << "(" << symb << ") no es un simbolo valdo";
        }
    }
    while(symb != 61);
    
    std::cout << "\nTu numero es " << mid;
    
    return 0;
}