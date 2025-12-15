// buatlah sebuah program yang mempunyai sebuah fungsi untuk menukar dua buah bilangan (tukar antar A dengan B). fungsi harus mengimplementasikan pointer untuk menukar nilai.

#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    cout << "Masukkan nilai A = ";
    cin >> A;
    cout << "Masukkan nilai B = ";
    cin >> B;

    tukar(&A, &B);

    cout << "Nilai setelah ditukar: " << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    
    return 0;
}



