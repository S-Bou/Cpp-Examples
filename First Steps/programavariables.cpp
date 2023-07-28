#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    const string nombre = "Juan";
    int edad {21};
    double salario;

    cout << "Introduce el salario del empleado: " << endl;
    cin >> salario;
    cout << "Datos del empleado: " << endl;
    cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;

	getch ();
    return 0;
}


