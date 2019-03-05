/*
Nama Program    : exercise-01
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 05 Maret 2019
Deskripsi       : exercise-01 Praktikum
*/

#include <iostream>         //Library yang digunakan
#include <string.h>

using namespace std;        //Mempersingkat waktu agar tidak menuliskan std lagi

struct Orang {              //Membuat struct orang
    int umur;
    char nama[30];
    char goldar[3];
    char jk[2];
};

int main()                  //Fungsi utama program
{
    Orang orang;            //Mendeklarasikan orang
    orang.umur = 10;                    //Memasukan data
    strcpy(orang.nama, "Fauzan");
    strcpy(orang.goldar, "AB");
    strcpy(orang.jk, "L");

    cout << "Data Saya : " << endl <<endl;          //Judul program
    cout << orang.umur << endl;                     //Menampilkan struct
    cout << orang.nama << endl;
    cout << orang.goldar << endl;
    cout << orang.jk << endl;
}
