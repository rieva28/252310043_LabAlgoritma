// buatlah sebuah matriks 2 dimensi berukuran 3x3, nilai-nilai matriks di input dan hasilnya ditampilkan

#include <iostream>
using namespace std;

int main()
{
    int matriks[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukkan nilai matriks[" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    cout << "Hasil matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
    
