#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char lagi;
    
    atas:
    cout << "Masukkan bilangan = ";
    cin >> a;
    
    b = a % 2;
    
    if (b == 0)
        cout << "Nilai " << a << " % 2 adalah " << b << endl;
    
    cout << "\nIngin hitung lagi [Y/T] : ";
    cin >> lagi;
    
    if (lagi == 'Y' || lagi == 'y'){
        goto atas;
    }
    if (lagi == 'T' || lagi == 't'){
        goto akhir;
    }
    akhir:
    
    return 0;
}
