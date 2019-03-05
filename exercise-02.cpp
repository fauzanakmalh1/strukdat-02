/*
Nama Program    : exercise-02
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 05 Maret 2019
Deskripsi       : exercise-02 Praktikum
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Theater {
    int room;
    char seat[3];
    char movieTitle[30];
};

int main()
{
    Theater theater;

    theater.room = 7;
    strcpy(theater.seat, "J9");
    strcpy(theater.movieTitle, "Adit & Jarwo");

    cout << "Data Theater" << endl <<endl;
    cout << "Room           : " << theater.room << endl;
    cout << "Seat           : " << theater.seat << endl;
    cout << "Movie Title    : " << theater.movieTitle << endl;
}
