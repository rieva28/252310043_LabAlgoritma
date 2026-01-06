//buatlah sebuah array 2 dimensi untuk menyimpan data (HARDCODED) seperti tabel di samping

#include <iostream>
using namespace std;

int main() {
    char nama[3][10] = {
        "Helena",
        "Joshua",
        "Antoni"
    };

    int npm[3] = {
        232310001,
        232310002,
        232310001
    };

    cout << "Nama\tNPM\n";

    for (int i = 0; i < 3; i++) {
        cout << nama[i] << "\t" << npm[i] << endl;
    }

    return 0;
}

