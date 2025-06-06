#include <iostream>
#include <windows.h>
using namespace std;

double calcularTarjeta(int tipoT, int monto){
	double montoF;
	switch (tipoT){
		case 1:{
			montoF=((monto/100)*25)+monto;
			break;
			}
		case 2:{
			montoF=((monto/100)*35)+monto;
			break;
			}
		case 3:{
			montoF=((monto/100)*40)+monto;
			break;
			}
		default:{
			cout<<"Tipo de tarjeta no valida!!!"<<endl;
			return monto;
			break;
			}
	}
	return montoF;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int tipoT;
	double montoT,montoF;
	
    cout<<"Ingrese el monto de su tarjeta: ";
    cin>>montoT;
    
	cout<<"Ingrese su tipo de tarjeta: ";
    cin>>tipoT;
    
    montoF= calcularTarjeta(tipoT, montoT);
    
    cout<<"Su nuevo saldo de la tarjeta es de: "<<montoF<<"."<<endl;
    
    return 0;
}