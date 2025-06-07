//Un maestro desea saber qué porcentaje de hombres//
//y que porcentaje de mujeres hay en un grupo de estudiantes//

#include<iostream>
using namespace std;

int main(){
	double CM, CH, PT, PH, PM;
	
	cout<<"ingrese el cantidad de mujeres"<<endl;
	cin>>CM;
	
	cout<<"ingrese la cantidad de hombres"<<endl;
	cin>>CH;
	
	PT = CM + CH;
	
	PM = (CM / PT) * 100;
	PH = (CH / PT) * 100;
	
	cout<<"el porcentaje de mujeres en el grupo es de: "<<PM<<"%"<<endl;
	cout<<"el porcentaje de hombres en el grupo es de: "<<PH<<"%"<<endl;
	
	return 0;
		
	
	
	
}