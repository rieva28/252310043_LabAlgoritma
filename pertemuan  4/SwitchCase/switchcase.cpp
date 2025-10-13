#include <iostream>
using namespace std;

int main()
{
    char kode;
    
    cout << "Masukkan Kode Barang [A/B/C]:";
    cin >>kode;
    
    switch (kode) {
        case 'A':
        cout <<"Alat Olahraga";
        break;
        
        case 'B':
        cout <<"Alat Elektronik";
        break;
        
        case 'C':
        cout <<"Alat Memasak";
        break;
        
        default:
        
        cout <<"anda salah memasukan kode";
        
        break;
    }
    getchar ();
}

