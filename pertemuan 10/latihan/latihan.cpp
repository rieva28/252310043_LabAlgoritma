// faktorial

#include <iostream>
 using namespace std;
 
 int hitung(int n);
 
 int main() {
     int a;
     cout <<"Masukkan nilai a = ";
    cin >> a;
    
    cout << "Panggil Fungsi Hitung = " << hitung(a);
    
    return 0;
 }
 
 int hitung(int n) {
     int x=1;
     for(int i=n; i>=1; i--) {
         x *=i;
     }
     return x;
 }
