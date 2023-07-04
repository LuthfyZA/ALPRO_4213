#include <iostream>
using namespace std;

struct car
{
    string merk,type,harga;
    int tahun;
};

int main()
{
    car mobil;
    car *ygpunya = &mobil;

    ygpunya->merk = "Nissan";
    ygpunya->type = "GTR-R34";
    ygpunya->tahun= 2003;
    ygpunya->harga= "7.000.000.000.000";

    cout << " merek\t : " << ygpunya->merk << endl;
    cout << " type\t : " << ygpunya->type << endl;
    cout << " tahun\t : "<< ygpunya->tahun << endl;
    cout << " harga\t : "<< ygpunya->harga<< endl;
    return 0;
}
