#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "PROGRAMA QUE EVALUA SI UN NÚMERO ES PAR O IMPAR\n\n"
    cout <<  "Ingrese un numero para evaluar si es par o impar: ";
    cin >> N;
    if (N%2 == 0){
        cout << "El numero " << N << " es par";
    }
    else{
        cout << "El numero " << N << " es impar";
    }
    
    return 0;
}