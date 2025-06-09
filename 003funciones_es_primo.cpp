#include <iostream>
#include <windows.h>
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
	SetConsoleOutputCP(CP_UTF8);
    int numero;
    bool resultado;

    cout<<"Biernvenido a mi programa" <<endl;
    
    cout << "Ingrese el número que desea saber si es primo: ";
    cin >> numero;

    resultado = esPrimo(numero);
    if (resultado){
        cout << "El número que ingreso es primo" << endl;
    }else{
        cout << "El número que ingreso no es primo" << endl;
    }
    
    cout<< "Gracias por utilizar el programa "<<endl;
    return 0;
}