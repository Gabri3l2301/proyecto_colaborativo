#include <iostream>
#include <windows.h>
using namespace std;

//FUNCIÓN PARA CALCULAR LA NOTA FINAL

float calcularNotaFinal(float conocimiento, float desempeno, float producto) {
    float notaFinal = 0;
	notaFinal = (conocimiento * 0.40) + (desempeno * 0.35) + (producto * 0.25);
    return notaFinal;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    float evidenciaConocimiento;
	float evidenciaDesempeno;
	float evidenciaProducto;
	
    cout << "Ingrese la calificación de Evidencia de Conocimiento (0-20): ";
    cin >> evidenciaConocimiento;
    cout << "Ingrese la calificación de Evidencia de Desempeño (0-20): ";
    cin >> evidenciaDesempeno;
    cout << "Ingrese la calificación de Evidencia de Producto (0-20): ";
    cin >> evidenciaProducto;
    
    float calificacionFinal = calcularNotaFinal(evidenciaConocimiento, evidenciaDesempeno, evidenciaProducto);

    cout << "\nLa calificación final es: " << calificacionFinal << endl;

    return 0;
}