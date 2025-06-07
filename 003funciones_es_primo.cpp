#include <iostream>
using namespace std;


bool esPrimo(int num){
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main (){
    int numero;
    bool resultado;

    cout << "Ingrese el numero que desea saber si es primo: ";
    cin >> numero;

    resultado = esPrimo(numero);
    if (resultado){
        cout << "\nEl numero que ingreso es primo" << endl;
    }else{
        cout << "\nEl numero que ingreso no es primo" << endl;
    }
    return 0;
}