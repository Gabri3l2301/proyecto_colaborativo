#include<iostream>
using namespace std;
int encontrarMayor(int Num1, int Num2, int Num3) {
    if (Num1>Num2 && Num1>Num3){
        return Num1;
        
    }else if (Num2>Num1 && Num2>Num3){
        return Num2;
        
    } else {
        return Num3;

    }
}


int main() {
    int Num1,Num2,Num3;
    cout <<"Bienvenido a mi programa" <<endl;
    
    cout <<"Ingresa un numero: " ;
    cin >> Num1;
    cout <<"Ingresa un numero: " ;
    cin>> Num2;
    cout <<"Ingresa un numero: ";
    cin>> Num3;
    
    int mayor = encontrarMayor(Num1, Num2, Num3);
    
    cout << "El mayor numero es: " << mayor << endl;
    cout << "Gracias por utilizar el programa " << mayor << endl;
    return 0;
}