// Buatlah program yang memiliki fungsi untuk menghitung berapa jumlah suatu karakter dalam sebuah kalimat. Pertama program akan meminta input sebuah kalimat, setelah itu program meminta karakter apa yang ingin dihitung dari kalimat tersebut. Fungsi akan menerima parameter kalimat dan karakter yang ingin dicari, dan fungsi akan mengembalikan angka berapa jumlah karakter tersebut dalam kalimat.

#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kalimat, char cari) {
    int jumlah = 0;
    for(int i = 0; i < kalimat.length(); i++) {
        if(kalimat[i] == cari) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kalimat;
    char karakter;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    cout << "Karakter yang ingin dihitung : ";
    cin >> karakter;

    int hasil = hitungKarakter(kalimat, karakter);

    cout << "\nJumlah karakter '" << karakter
         << "' dalam kalimat adalah : " << hasil << endl;

    return 0;
}

