#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    const int personas{10};
    int matrix [] {15, 22, 66};
    int edades [10] {13, 45, 78, 32};
    int edades2 [personas] {13, 45, 78, 32};
    
    edades[9] = 66;

    cout << matrix[0] << endl;
    cout << edades[0] << endl;
    cout << edades[9] << endl;


    const int filas{4};
    const int columnas {5};
    int matrixdoble [filas][columnas]{{1, 2, 3, 4, 5}, 
                                      {6, 7, 8, 9, 10},
                                      {11, 12, 13, 14, 15},
                                      {16, 17, 18, 19, 20}};

    for(int i=0; i <filas; i++){
        for(int j=0; j <columnas; j++){
            cout << matrixdoble[i][j] << ", ";
        };
        cout << endl;
    };


    int matrixdoble2 [filas][columnas];
    for(int i=0; i <filas; i++){
        for(int j=0; j <columnas; j++){
            matrixdoble[i][j] = rand() % 1000; // 5 + rand() % 100
        };

    };

    //getch ();
}
