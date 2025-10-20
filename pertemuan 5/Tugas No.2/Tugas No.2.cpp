#include <iostream>
using namespace std;

int main (){
    int a;
    bool prima = true;
    
    cout << "Masukkan sebuah bilangan: ";
    cin >> a;
    
        if (a<2) {
            prima = false;
       } else {
           for (int i=2; i<a; i++) {
               if (a%i == 0) {
                   prima = false;
                   break;
               }
           }
       }
       if (prima)
           cout << a << " " << "Termasuk bilangan prima" << endl;
       else
           cout << a << " " << "Bukan termasuk bilangan prima" << endl;

       return 0;
}
