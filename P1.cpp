#include<iostream>
using namespace std;

int main() {
	double Num1,Num2,Num3,M;
	cout<<"Ingrese el numero 1: ";
	cin>>Num1;
	cout<<"Ingrese el numero 2: ";
	cin>>Num2;
	cout<<"Ingrese el numero 3: ";
	cin>>Num3;
	if (Num1>Num2>Num3){
		cout << "El mayor es:"<<Num1<< endl;
	}else if (Num2>Num1>Num3){
		cout << "El mayor es:"<<Num2<< endl;
	}else { (Num3>Num1>Num2); 
		cout << "El mayor es:"<<Num3<< endl;
	}
    return 0;
}
