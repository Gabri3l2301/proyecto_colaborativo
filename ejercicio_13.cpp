//En un hospital existen tres áreas: Ginecología, Pediatría, Traumatología//
//El presupuesto anual del hospital se reparte conforme a la sig. tabla://
//Área Porcentaje del presupuesto//
//Ginecología 40%//
//Traumatología 30%//
//Pediatría 30%//
//Obtener la cantidad de dinero que recibirá cada área//
//para cualquier monto presupuestal dado//

#include<iostream>

using namespace std;

int main(){
	int P, PG, PT, PP;
	
	cout<<"ingrese el presupuesto del hospital:"<<endl;
	cin>>P;
	
	PG = P * 0.40;
	PT = P * 0.30;
	PP = P * 0.30;
	
	cout<<"el presupuesto para ginecolgia es de: S/."<<PG<<endl;
	cout<<"el presupuesto para traumatologia es de: S/."<<PT<<endl; 
	cout<<"el presupuesto para pedriatria es de: S/."<<PP<<endl;
	
	return 0;
	
} 