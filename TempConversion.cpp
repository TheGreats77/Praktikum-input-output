#include <iostream>

using namespace std; 

    int main() {
        cout << "Input suhu" << endl;
        cout << "-------------" << endl;
        
        double celcius, reamur, fahrenheit;

        cout << "Input celcius: " ;
        cin >> celcius;

        reamur = (4.0 / 5.0) * celcius;
        fahrenheit= (9.0 / 5.0) * celcius + 32;

        cout << endl;
        cout << "Konversi: " << endl;

        cout << "   " << reamur << char(248) << "R" << endl;
        cout << "   " << fahrenheit << char(248) << "F" << endl;

        system("pause");
        return 0;
    }
