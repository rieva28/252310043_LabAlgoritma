// Buatlah sebuah program yang mempunyai sebuah fungsi untuk mempangkat-tiga kan sebuah variabel yang diinput, nilai dalam variabel akan diubah secara langsung dalam fungsi tanpa menggunakan statement RETURN. Pertama nilai akan diinput, lalu diproses didalam fungsi, dan kemudian hasilnya di-output.
#include <iostream>
using namespace std;

// fungsi untuk mempangkat 3 nilai
void pangkatTiga(int &x) {
    x = x * x * x;   // nilai x berubah langsung di dalam fungsi
}

int main() {
    int nilai;

    cout << "Masukkan sebuah angka = ";
    cin >> nilai;

    pangkatTiga(nilai);  // proses dalam fungsi

    cout << "Hasil pangkat tiga = " << nilai << endl;

    return 0;
}
