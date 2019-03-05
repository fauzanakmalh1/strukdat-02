/*
Nama Program    : Move Zero To End of Array
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 05 Maret 2019
Deskripsi       : Pre Test 02 Praktikum
*/

#include <iostream>

using namespace std;

void moveZeroToEnd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i];

    while (count < n)
        arr[count++] = 0;
}

void input(int (&arr)[100], int& n)
{
    cout << "Masukan Panjang Data   : "; cin >> n; cout <<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan Data Ke- " <<(i+1) << " : " ; cin >> arr[i];
    }
}

void output(int arr[], int n)
{
    cout << "Hasilnya   : " <<endl;
    for (int i = 0; i < n; i++)
    {
         cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100];
    int n;

    cout<<"Program Move Zero To End" <<endl;

    input(arr, n);
    moveZeroToEnd(arr,n);
    output(arr, n);
}
