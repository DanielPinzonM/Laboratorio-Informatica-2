#include <iostream>

int main()
{
    double RadioC, PerimetroC, AreaC;

    std::cout << "PROGRAMA QUE CALCULA EL PERIMETRO Y AREA DE UN CIRCULO SEGUN UN RADIO N DADO\n\n";
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> RadioC;

    PerimetroC = 2*3.1416*RadioC;
    AreaC = 3.1416*(RadioC*RadioC);

    std::cout << "En un circulo de radio " << RadioC << "\nEl perimetro es igual a: " << PerimetroC <<  "\nEl area es igual a: " << AreaC;

    return 0;
}