#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num {};

    cout << "Introduce un núumero entero: ";
    cin >> num;

    if (num % 2 ==  0)
    {
        cout << num << " es par" << endl;
    }else{
        cout << num << " es impar" << endl;
    }
    
    cout << num << " es" << ((num%2==0) ? " par (T)" : " impar (T)");

    getch ();
}
