// buatlah program pencarian buku yang mengimmplementasikan structure untuk menyimpan data dari buku. struct harus menyimpan data-data dari buku berupa judul buku, penulis, dll. structure boleh dideklarasikan dengan manual tanpa input dari user (hard coded). setelah objek dari buku telah dibuat, program akan meminta user judul buku apa yang ingin dicari. program akan mengiterasi objek dan mencari judul buku yang user cari.
// jika buku yang dicari ketemu, tampilkan seluruh data dari buku dengan judul buku yang sesuai, jika buku yang dicari tidak ketemu, tampilkan buku tidak ditemukan.

#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    string kategori;
    string penerbit;
    int tahunTerbit;
};

int main()
{
    Buku daftarBuku[] = {
        {"Clean Code", "Robert C. Martin", "Software Engineering", "Prentice Hall", 2008},
        {"The Pragmatic Programmer", "Andrew Hunt & David Thomas", "Programming", "Addison-Wesley", 1999},
        {"Introduction to Algorithms", "Thomas H. Cormen", "Algorithms", "MIT Press", 2009},
        {"Design Patterns", "Erich Gamma et al.", "Software Design", "Addison-Wesley", 1994},
        {"Artificial Intelligence: A Modern Approach", "Stuart Russell & Peter Norvig", "Artificial Intelligence", "Pearson", 2020},
        {"Computer Networking: A Top-Down Approach", "James F. Kurose", "Networking", "Pearson", 2017},
        {"Operating System Concepts", "Abraham Silberschatz", "Operating Systems", "Wiley", 2018},
        {"Database System Concepts", "Abraham Silberschatz", "Databases", "McGraw-Hill", 2019},
        {"You Don't Know JS", "Kyle Simpson", "JavaScript", "O'Reilly Media", 2015},
        {"Python Crash Course", "Eric Matthes", "Programming", "No Starch Press", 2016}
    };

    int jumlahBuku = sizeof(daftarBuku) / sizeof(daftarBuku[0]);
    string judulCari;
    bool ditemukan = false;

    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, judulCari);

    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].judul == judulCari) {
            cout << "\nBuku ditemukan!\n";
            cout << "\nJudul       : " << daftarBuku[i].judul << endl;
            cout << "Penulis     : " << daftarBuku[i].penulis << endl;
            cout << "Kategori    : " << daftarBuku[i].kategori << endl;
            cout << "Penerbit    : " << daftarBuku[i].penerbit << endl;
            cout << "Tahun Terbit: " << daftarBuku[i].tahunTerbit << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "Buku tidak ditemukan." << endl;
    }

    return 0;
}
