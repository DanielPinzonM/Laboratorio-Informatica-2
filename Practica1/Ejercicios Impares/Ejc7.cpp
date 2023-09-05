#include <iostream>

using namespace std;

int main()
{
    int a, i, r=0;
    cout <<  "PROGRAMA QUE REALISA LA SUMATORIA DE UN NUMERO\n\n";
    cout <<  "Ingrese un numero para realizar la sumatoria: ";
    cin >> a;
    
    for(int i=1; i<=a; i++){
        r += i;
    }
    cout << "\nLa sumatoria desde 0 hasta " << a << " es: " << r;
}