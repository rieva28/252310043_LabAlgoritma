// buatlah program yang mempunyai structure pegawai dengan atribut: nama, jabatan, gaji
// buatlah sebuah objek pegawai dengan atribut-atributnya di-input oleh user, kemudian seluruh data ditampilkan kembali dengan tambahan output apakah gaji dari pegawai diatas atau dibawah UMR (diperbolehkan untuk menggunakan UMR daerah mana saja).
// jika gaji pegawai tersebut diatas UMR, tampilkan: "Gaji pegawai diatas UMR"
// jika gaji pegawai tersebut dibawah UMR, tampilkan: "Gaji pegawai dibawah UMR"

#include <iostream>
#include <string>

using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    int gaji;
};

int main() {
    Pegawai pegawai;

    int UMR = 5396761;
    
    cout << "Masukkan Nama Pegawai: ";
    getline(cin, pegawai.nama);

    cout << "Masukkan Jabatan: ";
    getline(cin, pegawai.jabatan);

    cout << "Masukkan Gaji Pegawai: ";
    cin >> pegawai.gaji;

    cout << endl;
    cout << "Data Pegawai " << endl;
    cout << "Nama    : " << pegawai.nama << endl;
    cout << "Jabatan : " << pegawai.jabatan << endl;
    cout << "Gaji    : Rp " << pegawai.gaji << endl;

    if (pegawai.gaji >= UMR) {
        cout << "Gaji pegawai diatas UMR" << endl;
    } else {
        cout << "Gaji pegawai dibawah UMR" << endl;
    }
}

        
