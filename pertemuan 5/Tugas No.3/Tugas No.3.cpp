#include <iostream>
using namespace std;

int main () {
    int a;
    char jawab;
    do {
        cout << "Masukkan bilangan: ";
        cin >> a;

        if (a<0) {
            cout << "Faktorial tidak dapat dihitung untuk bilangan negatif" << endl;
        } else {
            long long faktorial = 1;
            int i = 1;

                while (i <= a) {
                faktorial *=i;
                i++;
        }
        cout << "Hasil faktorial dari" << " " << a << " " << " = " << faktorial << endl;
        }
        cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
        cin >> jawab;
        cout << endl;

    } while (jawab == 'y');
    cout << "Program selesai" << endl;

    return 0;
}

