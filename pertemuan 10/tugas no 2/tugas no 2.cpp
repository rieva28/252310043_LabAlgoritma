// Buatlah sebuah program yang memiliki sebuah fungsi untuk mengkonversi suhu. Pertama program akan meminta input jenis suhu dan angka dari suhu, setelah itu program meminta input ingin dikonversi ke suhu jenis apa. Fungsi akan menerima parameter jenis suhu tujuan dan angka dari suhu, fungsi harus memiliki nilai balik (gunakan return) yang kemudian nilainya akan dioutput.

#include <iostream>
using namespace std;

double konversiSuhu(char dari, char ke, double nilai) {
    double hasil;

    // Konversi ke Celcius 
    double c;
    if(dari == 'C' || dari == 'c') c = nilai;
    else if(dari == 'F' || dari == 'f') c = (nilai - 32) * 5.0 / 9.0;
    else if(dari == 'K' || dari == 'k') c = nilai - 273.15;

    // Konversi dari Celcius ke tujuan
    if(ke == 'C' || ke == 'c') hasil = c;
    else if(ke == 'F' || ke == 'f') hasil = (c * 9.0 / 5.0) + 32;
    else if(ke == 'K' || ke == 'k') hasil = c + 273.15;

    return hasil;
}

int main() {
    char dari, ke;
    double nilai;

    cout << "Masukkan jenis suhu awal (C/F/K): ";
    cin >> dari;
    cout << "Masukkan nilai suhu: ";
    cin >> nilai;
    cout << "Ingin dikonversi ke (C/F/K): ";
    cin >> ke;

    double hasil = konversiSuhu(dari, ke, nilai);

    cout << "\nHasil konversi: " << hasil << endl;

    return 0;
}

