/*
Nama Program    : exercise-01
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 05 Maret 2019
Deskripsi       : exercise-01 Praktikum
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Orang {
    int umur;
    char nama[30];
    char goldar[3];
    char jk[2];
};

int main()
{
    Orang orang;
    orang.umur = 10;
    strcpy(orang.nama, "Fauzan");
    strcpy(orang.goldar, "AB");
    strcpy(orang.jk, "L");

    cout << "Data Saya : " << endl <<endl;
    cout << orang.umur << endl;
    cout << orang.nama << endl;
    cout << orang.goldar << endl;
    cout << orang.jk << endl;
}
