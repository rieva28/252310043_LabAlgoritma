#include <iostream>
using namespace std;

int main()
{
    int a=3, b=2, c=1, bil;
    
    cout << "Bil-A | Bil=B | Bil-C\n";
    cout << "-----------------------\n";
    
    for (bil=1; bil<=10; ++bil)
    {
        a+=b;
        b+=c;
        c+=2;
        
        cout << a << "\t" << b << "\t" << c << endl;
        
        if (c == 13)
            break;
    }
    
    return 0;
}
