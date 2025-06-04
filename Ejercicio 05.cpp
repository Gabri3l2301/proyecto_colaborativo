#include <iostream>
#include <windows.h>
using namespace std;

double calcularGanancia(double ganancia, double precio){
	double gananciaF=(precio/100)*ganancia;
	return gananciaF;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    double ganancia, precio, precioF,gananciaF;
    
    cout<<"Ingrese el precio de compra del articulo: ";
    cin>>precio;
    cout<<endl;
    cout<<"Ingrese el porcentaje (%) de ganancia que desea obtener del producto:";
    cin>>ganancia;
    cout<<endl;
    
    gananciaF= calcularGanancia(ganancia,precio);
    
    cout<<"El monto al que deberia vender es a s/"<< gananciaF+precio<<"."<<endl;
	    
    return 0;
}
