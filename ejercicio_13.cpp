#include<iostream>

using namespace std;

int main(){
	double Presupuesto, Presu_Gineco, Presu_Trauma, Presu_Pedria;
	
	cout << "===========================================" << endl;
	
	cout << "\n BIENVENIDO A MI PROGRAMA \n" << endl;
		
	do{
		cout << "Ingrese el presupuesto del hospital:" << endl;
		cin >> Presupuesto;
		
		if(Presupuesto <= 0){
		cout<<"\nEl presupuesto no puede ser cero o menor...!!! \n" <<endl;
		}
	
	} while(Presupuesto <= 0);	
		
		
	Presu_Gineco = Presupuesto * 0.40;
	Presu_Trauma = Presupuesto * 0.30;
	Presu_Pedria = Presupuesto * 0.30;
	
	cout << "\nEl presupuesto para ginecolgia es de: S/." << Presu_Gineco << endl;
	
	cout << "El presupuesto para traumatologia es de: S/." << Presu_Trauma << endl; 
	
	cout << "El presupuesto para pedriatria es de: S/." << Presu_Pedria <<endl;
	
	cout << "\n GRACIAS POR USAR MI PROGRAMA <3!";
	
	return 0;
	
} 
