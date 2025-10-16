#include <iostream>   // untuk cout, cin, endl
#include <iomanip>    // untuk setprecision()
#include <cmath>      // untuk pow()
using namespace std;

int main() {
    cout << "BMI Calculator" << endl;
    cout << "--------------" << endl;

    // Input berat badan
    cout << "Weight:        kg\b\b\b\b\b\b\b";
    double weight;
    cin >> weight;

    // Input tinggi badan
    cout << "Height:         m\b\b\b\b\b\b\b";
    double height;
    cin >> height;

    // Rumus BMI
    double bmi = weight / pow(height, 2);

    // Menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "Your BMI is \"" << bmi << "\"" << endl;

    system("pause");
    return 0;
}
