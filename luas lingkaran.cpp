#include <iostream>
using namespace std;

int main()
{
    int r; // jari-jari lingkaran
    
    cout << "Menghitung Luas Lingkaran " << endl;
    
    // Masukkan jari-jari
    cout << "\nMasukkan jari-jari lingkaran: ";
    cin >> r;
    
    // Menghitung luas lingkaran
    double luas = M_PI * r * r;
    
    // Menampilkan langkah perhitungan
    cout << "Rumus Luas Lingkaran = phi * r^2" << endl;
    cout << "L = " << M_PI << " * " << r << "^2" << endl;
    cout << "L = " << luas << endl;
    
    // Menampilkan hasil akhir
    cout << "luas lingkaran = " << luas << endl;
    
    return 0;
}
