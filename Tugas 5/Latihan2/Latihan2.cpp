#include <iostream>
using namespace std;

struct car
{
    string merk,type,harga;
    int tahun;
};
car mobil;

int main()
{
    mobil.merk = "toyota";
    mobil.type = "corolla";
    mobil.tahun= 2001;
    mobil.harga= "5.300.000.000.000";
    cout << " merek\t : " << mobil.merk << endl;
    cout << " type\t : " << mobil.type << endl;
    cout << " tahun\t : "<< mobil.tahun << endl;
    cout << " harga\t : "<< mobil.harga<< endl;
    return 0;
}
