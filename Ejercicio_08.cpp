//Un maestro desea saber qué porcentaje de hombres//
//y que porcentaje de mujeres hay en un grupo de estudiantes//

#include<iostream>
using namespace std;

int main(){
    double PH, PM;
    int CM, CH, CT;
    
    do {
        cout << "Ingrese la cantidad de mujeres: " << endl;
        cin >> CM;
        if (CM <= 0) {
            cout << "Dato no valido, intente de nuevo." << endl;
        }
    } while (CM <= 0);
    
    do {
        cout << "Ingrese la cantidad de hombres: " << endl;
        cin >> CH;
        if (CH <= 0) {
            cout << "Dato no valido, intente de nuevo." << endl;
        }
    } while (CH <= 0);
    
    CT = CM + CH;
    
    PM = (CM * 100.0) / CT;
    PH = (CH * 100.0) / CT;
    
    cout << "El porcentaje de mujeres en el grupo es de: " << PM << "%" << endl;
    cout << "El porcentaje de hombres en el grupo es de: " << PH << "%" << endl;
    
    return 0;
}
