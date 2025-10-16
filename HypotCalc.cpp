#include <iostream>
#include <cmath>     // untuk sqrt() dan pow()
#include <iomanip>   // untuk setprecision()
using namespace std;

int main() {
    char ulang;

    do {
    double a, b, c;

    cout << "Hitung sisi miring" << endl;
    cout << endl;

    // Gambar segitiga ASCII
    cout << "   |\\ " << endl;
    cout << "   | \\ " << endl;
    cout << "   |  \\ " << endl;
    cout << " a |   \\ c" << endl;
    cout << "   |    \\ " << endl;
    cout << "   |     \\ " << endl;
    cout << "   ---------" << endl;
    cout << "       b" << endl;
    cout << endl;

    // Input dua sisi
    cout << "Masukkan sisi a dan b: ";
    cin >> a >> b;

    // Rumus Pythagoras -> c = √(a² + b²)
    c = sqrt(pow(a, 2) + pow(b, 2));

    // Tampilkan hasil dengan 2 angka desimal
    cout << "Sisi miring c        : " << fixed << setprecision(2) << c << endl;

    // Tanya apakah mau menghitung lagi
        cout << "Ingin menghitung lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y'); // ulang kalau user jawab y/Y


    system("pause");
    return 0;
}
