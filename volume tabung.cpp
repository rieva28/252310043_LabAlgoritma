#include <iostream>
using namespace std;

int main()
{
    int r, t; // r: jari-jari, t: tinggi
    
    cout << "Menghitung Volume Tabung " << endl;
    
    // Masukkan jari-jari
    cout << "\nMasukkan jari-jari tabung: ";
    cin >> r;
    
    // Masukkan tinggi
    cout << "Masukkan tinggi tabung: ";
    cin >> t;
    
    // Menghitung volume tabung
    double volume = M_PI * r * r * t;
    
    // Menampilkan langkah perhitungan
    cout << "Rumus Volume Tabung = phi * r^2 * t" << endl;
    cout << "V = " << M_PI << " * " << r << "^2" << " * " << t << endl;
    cout << "V = " << volume << endl;
    
    // Menampilkan hasil akhir
    cout << "Volume tabung adalah: " << volume << " cm^3" << endl;

        return 0;
}
