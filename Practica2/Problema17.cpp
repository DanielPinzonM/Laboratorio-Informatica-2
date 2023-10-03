#include <iostream>

short int CalSumDiv(short int N);
short int CalSumNumA(short int N);

int main(){

    short int Num;

    std::cin >> Num;

    std::cout << CalSumNumA(Num);

    return 0;
}

short int CalSumNumA(short int N){

    short int suma = 0;

    for (short int i=1; i<=N; i++){
        if (CalSumDiv(i)==N){
            suma += i;
        }
    }

    return suma;

}

short int CalSumDiv(short int N){

    short int suma=1;

    for (short int i=2; i<=(N/2); i++){
        if (N%i == 0){
            suma += i;
        }
    }

    return suma;

}