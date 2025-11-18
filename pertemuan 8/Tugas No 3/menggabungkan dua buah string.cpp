// buatlah program untuk menggabungkan dua buah string. kalimat1 = Teknik; kalimat2 = Informatika; menjadi = TeknikInformatika

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char kalimat[] = "Teknik";
    strcat(kalimat, "Informatika");
    
    cout << kalimat;
    
    return 0;
}
