#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout <<  "PROGRAMA QUE CALCULA EL MAYOR ENTRE DOS NUMEROS\n\n";
    cout <<  "Ingrese el primer numero: ";
    cin >> a;
    cout <<  "Ingrese el segundo numero: ";
    cin >> b;
    
    if (a>b){
        cout << "\nEl numero mayor es: " << a;
    }
    else if(a<b){
        cout << "\nEl numero mayor es: " << b;
    }
    else{
        cout << "\nLos dos numeros ingresados son iguales";
    }
    
    return 0;
}