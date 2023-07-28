#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
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
        cout << records5[j] << endl;
        j++;
    }

    //getch ();
}
