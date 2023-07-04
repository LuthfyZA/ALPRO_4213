#include <iostream>
using namespace std;

int tambah (int a,int b)
{
    if (a == 0)
    {
        return b;
    }else
    {
        return 1 + tambah(a-1,b);
    }
}
int kurang (int a, int b)
{
    if ( b == 0)
    {
        return a;
    }else
    {
        return -1 + kurang(a,b-1);
    }
}
int kali (int a,int b)
{
    if (a == 1)
    {
        return b;
    }else
    {
        return b + kali(a-1,b);
    }
}
int bagi (int a,int b)
{
    if (a < b)
    {
        return 0;
    }else
    {
        return 1 + bagi(a-b,b);
    }
}
int pangkat (int a,int b)
{
    if (b == 0)
    {
        return 1;
    }else
    {
        return a * pangkat(a,b-1);
    }
}


int main()
{
    int a;
    int b;
    cout << "masukan bilangan 1 : " ;
    cin >> a;
    cout << "masukan bilangan 2 : " ;
    cin >> b;
    cout << "================================"<< endl;
    cout << "Hasil Tambah \t: " << tambah(a,b) <<endl;
    cout << "Hasil Kurang \t: " << kurang(a,b) <<endl;
    cout << "Hasil Kali \t: " << kali(a,b) <<endl;
    cout << "Hasil Bagi \t: " << bagi(a,b) <<endl;
    cout << "Hasil Pangkat \t: " << pangkat(a,b) <<endl;
    cout << "================================"<<endl;
    return 0;
}
