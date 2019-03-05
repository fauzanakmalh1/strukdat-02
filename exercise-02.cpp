/*
Nama Program    : exercise-02
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 05 Maret 2019
Deskripsi       : exercise-02 Praktikum
*/

#include <iostream>         //Library yang digunakan
#include <string.h>

using namespace std;           //Mempersingkat waktu agar tidak menuliskan std lagi

struct Theater {                //Membuat struct Theater
    int room;
    char seat[3];
    char movieTitle[30];
};

int main()                  //Fungsi Utama Program
{
    Theater theater;        //Mendeklarasikan theater

    theater.room = 7;                   //Memasukan data
    strcpy(theater.seat, "J9");
    strcpy(theater.movieTitle, "Adit & Jarwo");

    cout << "Data Theater" << endl <<endl;          //Judul Program
    cout << "Room           : " << theater.room << endl;        //Menampilkan struct
    cout << "Seat           : " << theater.seat << endl;
    cout << "Movie Title    : " << theater.movieTitle << endl;
}
