#include <iostream>
using namespace std;

char numeroVocales(int num){
    switch (num){
    case 1:
        return 'A';
        break;
    case 2:
        return 'E';
        break;
    case 3:
        return 'I';
        break;
    case 4:
        return 'O';
        break;
    case 5:
        return 'U';
        break;
    }
}

int main() {
    int num;
    char vocal;
    
    cout<<"Bienvenido a mi programa"<<endl;
     
	cout << "Ingrese un numero del 1 al 5: ";
    cin >> num;
    
	if (num<=5 && num>=1){
	vocal = numeroVocales(num);
	cout << "La vocal es: " << vocal << endl;
    } else {
        cout << "Error, numero no valido" << endl;
    }
    
    cout<< "Gracias por usar el programa " <<endl;

    return 0;
}