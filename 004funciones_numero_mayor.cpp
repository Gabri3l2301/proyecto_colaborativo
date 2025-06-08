#include <iostream>
#include <windows.h>
using namespace std;

int numeroMayor(int n1, int n2, int n3){
    int mayor; 
    if (n1 > n2 && n1 > n3){
        mayor = n1;
    }else if (n2 > n1 && n2 > n3){
        mayor = n2;
    }else{
        mayor = n3;
    }
    return mayor;
}

int main (){
    SetConsoleOutputCP(CP_UTF8);
    int numero1;
    int numero2;
    int numero3;
    int mayor;

    cout << "Ingrese el primer número ";
    cin >> numero1;
    cout << "Ingrese el segundo número ";
    cin >> numero2;
    cout << "Ingrese el tercer número ";
    cin >> numero3;

    mayor = numeroMayor(numero1, numero2, numero3);
    cout << "El mayor de los 3 números es: " << mayor << endl;

    return 0;
}