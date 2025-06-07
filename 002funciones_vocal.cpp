#include <iostream>
using namespace std;

char numeroVocales(int num){
    switch (num){
    case 1:
        return 'a';
        break;
    case 2:
        return 'e';
        break;
    case 3:
        return 'i';
        break;
    case 4:
        return 'o';
        break;
    case 5:
        return 'u';
        break;
    default:
        return 'x';
        break;
    }
}

int main() {
    int num;
    char vocal;

    cout << "Ingrese un numero del 1 al 5: ";
    cin >> num;

    vocal = numeroVocales(num);
    if (vocal != 'x') {
        cout << "La vocal correspondiente es: " << vocal << endl;
    } else {
        cout << "Error, numero no valido" << endl;
    }

    return 0;
}