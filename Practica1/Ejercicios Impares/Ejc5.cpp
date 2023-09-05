#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout <<  "PROGRAMA QUE CALCULA LA DIVISION ENTRE DOS NUMEROS Y REDONDEA EL RESULTADO\n\n";
    cout <<  "Ingrese el dividendo: ";
    cin >> a;
    cout <<  "Ingrese el divisor: ";
    cin >> b;
    
    if((double(a/b) - int(a/b)) > 0.5){
       cout << "\n\n" << a << "/" << b << " = " << (int(a/b)+1);
    }
    else{
        cout << "\n\n" << a << "/" << b << " = " << int(a/b);
    }
    
    return 0;
}