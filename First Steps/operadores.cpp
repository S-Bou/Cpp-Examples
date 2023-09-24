#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{

int a=5;
int b=5;

int z=++a; //Prefijo

cout << "El valor de z es: " << z << endl;
cout << "El valor de a es: " << a << endl;

int w=b++; //Subfijo

cout << "El valor de w es: " << w << endl;
cout << "El valor de b es: " << b << endl;

// Operador módulo [%]

int num;
bool es_primo = true;

cout << "Introduce un núumero positivo: ";

cin >> num;

for ( int i=2; i<=num/2; i++){
    if(num % i == 0){
        es_primo = false;
        break;
    }
}

if(es_primo){
    cout << num << " es primo." << endl;
}else{
    cout << num << " no es primo." << endl;
}

    getch ();
}
