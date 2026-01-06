// buatlah program yang memiliki sebuah fungsi yang menerima parameter berupa ALAMAT (pointer) suatu variabel, fungsi ini akan memvalidasi nilai yang diinput agar berada pada rentang 0 - 100
// jika nilai bernilai negatif, maka nilai tersebut akan diubah menjadi nilai valid yang terdekat (0)
// jika nilai bernilai lebih dari 100, maka nilai tersebut akan diubah menjadi nilai valid yang terdekkat (100)
// ptogram akan menerima angka dari user, kemudian hasil akan divalidasi, dan output hasil validasinya.

#include <iostream>
using namespace std;

void validasiNilai(int *nilai) {
    if (*nilai < 0) {
        *nilai = 0;
    } else if (*nilai > 100) {
        *nilai = 100;
    }
}

int main() {
    int angka;

    cout << "Masukkan sebuah nilai: ";
    cin >> angka;

    validasiNilai(&angka);

    cout << "Nilai setelah divalidasi: " << angka << endl;

    return 0;
}
