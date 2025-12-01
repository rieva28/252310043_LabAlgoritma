// buatlah program perhitungan matriks (penjumlahan, pengurangan, dan perkalian) yang dapat diinput manual elemennya!

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    int a[100][100], b[100][100];
    int sum[100][100], diff[100][100], mult[100][100];
    int i, j, k;

    cout << "Masukkan jumlah baris (1 - 100): ";
    cin >> r;

    cout << "Masukkan jumlah kolom (1 - 100): ";
    cin >> c;

    // input matriks A
    cout << endl << "Masukkan matriks pertama:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Matriks a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    // input matriks B
    cout << endl << "Masukkan matriks kedua:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Matriks b[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> b[i][j];
        }
    }

    // penjumlahan
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

   // pengurangan
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // perkalian
    // matriks (r × c) * (c × c)
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            mult[i][j] = 0;

            for (k = 0; k < c; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << endl << "Hasil Penjumlahan Matriks:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Hasil Pengurangan Matriks:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Hasil Perkalian Matriks:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
