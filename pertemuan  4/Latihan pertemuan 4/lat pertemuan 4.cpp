#include <iostream>
using namespace std;

int main() {
    int angka;
    
    cout << "Masukkan angka : ";
    cin >> angka;
    
    if (angka % 2 == 0) {
        cout << "Angka adalah bilangan genap" << endl;
    }
    else {
        cout << "Angka adalah bilangan ganjil" << endl;
    }
    
    return 0;
}
