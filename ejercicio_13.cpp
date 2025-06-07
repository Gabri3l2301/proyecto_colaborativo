#include<iostream>

using namespace std;

int main(){
	int P, PG, PT, PP;
		
	do{
		cout<<"Ingrese el presupuesto del hospital:"<<endl;
		cin>>P;
		
		if(P<=0){
		cout<<"El presupuesto no puede ser cero o menor...!!!"<<endl;
		}
		
	}while(P<=0);
	
	PG = P * 0.40;
	PT = P * 0.30;
	PP = P * 0.30;
	
	cout<<"El presupuesto para ginecolgia es de: S/."<<PG<<endl;
	cout<<"El presupuesto para traumatologia es de: S/."<<PT<<endl; 
	cout<<"El presupuesto para pedriatria es de: S/."<<PP<<endl;
	
	return 0;
	
} 
