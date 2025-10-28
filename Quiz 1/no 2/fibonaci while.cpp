#include <iostream>
using namespace std;

int main() {
    int n;
    int angka1 = 0, angka2 = 1;
    int i = 1;

    cout << "Masukkan jumlah suku Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    while (i <= n) {
        cout << angka1 << " ";
        int next = angka1 + angka2;
        angka1 = angka2;
        angka2 = next;
        i++;
    }

    cout << endl;
    return 0;
}
