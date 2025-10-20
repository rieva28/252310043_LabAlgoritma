#include <iostream>
using namespace std;

int main ()
{
    int a, b;
    
    cout << "Masukkan batas nilai akhir deret bilangan ganjil: ";
    cin >> b;
    
    for(a = 1; a <= b; a+=2)
        cout << a;
    
    getchar();
}
    
