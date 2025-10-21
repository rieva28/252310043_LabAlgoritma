#include <iostream>
using namespace std;

int main() {
    int nilai[10];
    int total = 0;
    
    cout << "Masukkan 10 bilangan: ";
    for (int i = 0; i < 10; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }
    
    for (int i = 0; i < 10; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }
    cout << endl;
    
    cout << "Bilangan genap: " ;
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (nilai[i] % 2 == 0) {
            cout << nilai[i] << " ";
        }
    }
    cout << endl;
    
    cout << "\nBilangan ganjil: " ;
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (nilai[i] % 2 != 0) {
            cout << nilai[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
