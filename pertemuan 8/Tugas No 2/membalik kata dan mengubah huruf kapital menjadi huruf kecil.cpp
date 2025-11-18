// buatlah program untuk membalik kata & mengubah huruf kapital menjadi huruf kecil dari kata "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN
// maaf teh xcode strlwr dan strrev tidak bisa karena itu hanya bisa di windows, jadi ini buatan sendiri 

#include <iostream>
#include <string.h>
using namespace std;

// versi buatan strlwr
char* strlwr_custom(char* s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

// versi buatan strrev
char* strrev_custom(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    return s;
}

int main()
{
    char kata[] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

    strlwr_custom(kata);

    strrev_custom(kata);

    cout << "Hasil: " << kata << endl;

    return 0;
}
