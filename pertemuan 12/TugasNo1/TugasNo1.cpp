// buatlah sebuah program yang mengimplementasikan struct, dimana struct ini akan menyimpan nilai-nilai dari mahasiswa (misal nilai tugas, praktikum, UTS, UAS). buatlah minimal satu objek nilai mahasiswa, kemudian datanya diinput oleh user. kemudian data tersebut akan dirata-ratakan, dan output seperti berikut berdasarkan hasil rata-rata nilainya.
// nilai >= 90 -> nilai A
// 89 < nilai <= 80 -> nilai B
// 79 < nilai <= 70 -> nilai C
// 69 < nilai <= 60 -> nilai D
// nilai <= 59 -> nilai E

#include <iostream>
using namespace std;

struct Mahasiswa {
    float tugas;
    float praktikum;
    float uts;
    float uas;
};

int main() {
    Mahasiswa mhsw;
    float rata;
    char grade;

    cout << "Masukkan nilai Tugas      : ";
    cin >> mhsw.tugas;

    cout << "Masukkan nilai Praktikum  : ";
    cin >> mhsw.praktikum;

    cout << "Masukkan nilai UTS        : ";
    cin >> mhsw.uts;

    cout << "Masukkan nilai UAS        : ";
    cin >> mhsw.uas;

    rata = (mhsw.tugas + mhsw.praktikum + mhsw.uts + mhsw.uas) / 4;

    if (rata >= 90) {
        grade = 'A';
    } else if (rata > 80 && rata <= 89) {
        grade = 'B';
    } else if (rata > 70 && rata <= 79) {
        grade = 'C';
    } else if (rata > 60 && rata <= 69) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    cout << "\nRata-rata nilai : " << rata << endl;
    cout << "Grade nilai     : " << grade << endl;

    return 0;
}
