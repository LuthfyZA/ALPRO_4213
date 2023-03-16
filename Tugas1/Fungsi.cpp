//judul function
#include <iostream>
using namespace std;

//kamus
//deskripsi
int tambah (int a, int b)
{
    return a+b;
}
int kurang(int x, int y)
{
    return x-y;
}
int penjumlahanArray (int arr[] , int size)
{
    int jumlahArray = 0;
    for(int f = 0; f < size ; f++){
       jumlahArray += arr[f];
    }
    return jumlahArray;
}
int rata2array( int ar[], int size ){
    int hasil = 0;
    for(int r = 0; r < size; r++){
        hasil += ar[r];
    }
    return hasil / size ;
}
main ()
{
   cout << "penjumlahan" << endl;
    cout << "====================="<< endl;
    cout << "masukan angka ke 1: " ;int c; cin >> c;
    cout << "masukan angka ke 2: " ;int d; cin >> d;
    cout << "hasil = " << tambah(c,d) << endl;
    cout << endl;

    cout << "pengurangan" << endl;
    cout << "====================="<< endl;
    cout << "masukan angka ke 1: " ;int e; cin >> e;
    cout << "masukan angka ke 2: " ;int f; cin >> f;
    cout << kurang(e,f) << endl;
    cout << endl;

    cout << "penjumlahan array " << endl;
    cout << "====================="<< endl;
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "maka hasilnya adalah : " << endl;
    cout << penjumlahanArray(arr,size);
    cout << endl;

    cout << "rata - rata array" << endl;
    cout << "====================="<< endl;
    int ar[]={1,2,3,4,5};
    int sizerata2 = sizeof(ar) / sizeof(ar[0]);
    cout << "maka hasilnya adalah : " << endl;
    cout << rata2array(ar,sizerata2);

}
