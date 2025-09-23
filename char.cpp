#include <iostream>
using namespace std;

int main()
{
    char y[30]; char z[35]; char x[40];
    
    cout << "Masukkan NPM Anda: ";
    cin >> x;
    cout << "Masukkan Nama Anda: ";
    cin >> y;
    cout << "Masukkan Alamat Anda: ";
    cin >> z;
    
    cout << "NPM Anda adalah: " << x;
    cout << "\nNama Anda adalah: " << y;
    cout << "\nAlamat Anda adalah: " << z;
    
    return 0;
}
