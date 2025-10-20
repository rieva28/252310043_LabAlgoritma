#include <iostream>
using namespace std;

int main ()
{
    int  number = 0;
    int sum = 0;
    
    do {
        sum+= number; //rumus ngitung total hasil penjumlahannya
        cout << "Masukkan  angka: ";
        cin >> number;
    }
    while (number >= 1); //akan berakhir saat input angka 0
    
    cout << "\nHasil penjumlahannya adalah " << sum << endl;
    return 0;
}
