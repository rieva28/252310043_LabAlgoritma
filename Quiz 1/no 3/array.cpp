#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int total = 0, rata;
    int terbesar, terkecil;


    cout << "Masukkan nilai ujian dari 5 mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai mahasiswa ke-" << i + 1 << ":" ;
        cin >> nilai[i];
        total += nilai[i];
    }

    terbesar = nilai[0];
    terkecil = nilai[0];

    for (int i = 1; i < 5; i++) {
        if (nilai[i] > terbesar)
            terbesar = nilai[i];
        if (nilai[i] < terkecil)
            terkecil = nilai[i];
    }

    rata = total / 5;

    cout << "\nHasil Perhitungan" << endl;
    cout << "Nilai rata-rata : " << rata << endl;
    cout << "Nilai tertinggi : " << terbesar << endl;
    cout << "Nilai terendah  : " << terkecil << endl;

    cout << "Kategori rata-rata : ";
    if (rata > 80)
        cout << "Baik Sekali";
    else if (rata >= 70)
        cout << "Baik";
    else if (rata >= 60)
        cout << "Cukup";
    else
        cout << "Kurang";

    cout << endl;
    
    return 0;
}

