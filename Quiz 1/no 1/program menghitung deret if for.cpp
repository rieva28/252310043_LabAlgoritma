// Buatlah program menghitung 10 deret bilangan ganjil dengan hasil:
// 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 = 100
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
     cout << "Deret 10 bilangan ganjil: ";
    for (int i = 1; i <= 19; i += 2) {
        cout << i;
        sum += i;
        if (i < 19) cout << " + ";
    }
    cout << " = " << sum << endl;
}
