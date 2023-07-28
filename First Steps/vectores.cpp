#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
    vector <int> records;
    vector <int> records1 (5);
    vector <int> records2 (10);
    vector <int> records3 {11, 12, 13, 14, 15};
    vector <char> records4 {'A', 'B', 'C'};
    vector <double> records5 (25, 2125.50);

    for (int i = 0; i < 5; i++){
        cout << records3[i] << endl;
    }
    
    for (int i = 0; i < 3; i++){
        cout << records4[i] << endl;
    }

    int j = 0;
    while(j < records5.size()){
        cout << records5[j] << " ";
        j++;
    }
    cout << endl;

    // Vectores con comprobación de límites.
    records3.at(3) = 105;

    cout << records3.at(3) << endl;

    records3.push_back(106);

    cout << records3.at(5) << endl;

    for (int i = 0; i < records3.size(); i++){
        cout << records3[i] << endl;
    }

    int elementos = 0;
    int nuevodato;

    cout << "Numero de elementos?" << endl;

    cin >> elementos;

    vector <int> records6 (elementos);

    for (int i = 0; i < elementos; i++){
        cout << "Introduce el elemento n: " << i+1 << endl;
        //cin >> records6[i]; 
        cin >> nuevodato;
        records6.push_back(nuevodato); 
    }

    cout << endl;

    for (int i = 0; i < records6.size(); i++){
        cout << records6.at(i) << endl;
    }



    //getch ();
}
