#include <iostream>

using namespace std;

struct luas
{
    float p, l, r, jml;
};
typedef struct luas operasi;
operasi persegi_panjang;
operasi lingkaran;

struct volume
{
    float phi = 22.0/7.0;
    float jml;
    int r,t;
};
typedef struct volume op;
op kerucut;
op bola;

int main()
{
    persegi_panjang.p = 4.2;
    persegi_panjang.l = 2;
    persegi_panjang.jml = persegi_panjang.p * persegi_panjang.l;
    cout << " luas persegi panjang\t : " << persegi_panjang.jml << endl;

    lingkaran.r = 4;
    lingkaran.jml = (22.0/7.0) * lingkaran.r * lingkaran.r;
    cout << " luas lingkaran \t : " << lingkaran.jml << endl << endl;

    cout << " jari-jari\t\t : "; cin >> kerucut.r;
    cout << " tinggi\t\t\t : "; cin >> kerucut.t;
    kerucut.jml = (1.0/3.0) * kerucut.phi * kerucut.r * kerucut.r * kerucut.t;
    cout << " volume kerucut \t : " << kerucut.jml << endl<<endl;

    bola.r=2;
    bola.jml = (4.0/3.0) * bola.phi * bola.r * bola.r * bola.r;
    cout << " volume bola\t\t : " << bola.jml << endl;
    return 0;
}
