#include <iostream> // untuk input atau output
using namespace std; // supaya bisa pakai cout tanpa std
int main(){
    // inisialisasi variabel
    int x=50; // memasukkan nilai 50 ke dalam variabel x
    
    int a,b,c,d,e; // variabel untuk menyimpan hasil perbandingan
    // proses
    a = x > 5 + 5; // apakah x > dari 10? 50 > dari 10, hasil = benar (1)
    b = x > 100; // apakah x > dari 100? 50 < dari 100, hasil = salah (0)
    c = a && b; // hanya benar kalau a dan b sama-sama 1, hasil = 0
    d = a || b; // benar kalau salah satu bernilai 1, hasil = 1
    e = ! (c); // kebalikan dari c, kalau c = 0 maka hasil = 1
    // output berupa 1 (benar) dan 0 (salah)
    cout<<"\nNilai a = x > 5 + 5 = "<<a<<endl; // menampilkan nilai a
    cout<<"\nNilai b = x > 100 = "<<b<<endl; // menampilkan nilai b
    cout<<"\nNilai c = a && b = "<<c<<endl; // menampilkan nilai c
    cout<<"\nNilai d = a || b = "<<d<<endl; // menampilkan nilai d
    cout<<"\nNilai e = ! (c) = "<<e<<endl; // menampilkan nilai e
    getchar(); // supaya tidak terdapat kalimat di output 
}
