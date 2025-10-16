#include <iostream>   // untuk cout dan endl
#include <iomanip>    // untuk setw() dan setfill()

using namespace std;

int main() {
    // Judul tabel
    cout << setw(5) << "No." << setw(25) << "Item" << setw(10) << "Price" << endl;

    // Garis pemisah manual
    cout << "-----------------------------------------" << endl;

    // Isi tabel
    cout << setw(5) << 1 << setw(25) << "Apple"  << setw(10) << "$1.00" << endl;
    cout << setw(5) << 2 << setw(25) << "Banana" << setw(10) << "$0.50" << endl;
    cout << setw(5) << 3 << setw(25) << "Cherry" << setw(10) << "$2.00" << endl;
    cout << setw(5) << 4 << setw(25) << "Date"   << setw(10) << "$3.00" << endl;

    // Menahan layar (khusus Windows)
    system("pause");
    return 0;
}
