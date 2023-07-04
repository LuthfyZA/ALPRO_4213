#include <iostream>
#include <cstring>

using namespace std;

typedef struct mahasiswa
{
    char NIM[14];
    string Nama,jurusan;
    int lulus;
}emp;

int main ()
{
    emp* data = new emp[4];
    strcpy(data[0].NIM, "A11.2020.14497");
    data[0].Nama = "Bayu";
    data[0].jurusan = "Broadcasting";
    data[0].lulus = 2023;

    strcpy(data[1].NIM, "A11.2010.14485");
    data[1].Nama = "Reyhan";
    data[1].jurusan = "SI";
    data[1].lulus = 2023;

    strcpy(data[2].NIM, "A11.2000.14456");
    data[2].Nama = "Kevin";
    data[2].jurusan = "DKV";
    data[2].lulus = 2023;

    strcpy(data[3].NIM, "A11.1990.14465");
    data[3].Nama = "Susi";
    data[3].jurusan = "Kesehatan";
    data[3].lulus = 2023;

    //array statis
    cout << " Statis " << endl;
    cout << "NIM"<< " || Nama" << " || Jurusan" << " || Tahun lulus" << endl;
    cout << data[0].NIM << " || " << data[0].Nama << " || " << data[0].jurusan << " || " << data[0].lulus << endl;
    cout << data[1].NIM << " || " << data[1].Nama << " || " << data[1].jurusan << " || " << data[1].lulus  << endl;
    cout << data[2].NIM << " || " << data[2].Nama << " || " << data[2].jurusan << " || " << data[2].lulus  << endl;
    cout << data[3].NIM << " || " << data[3].Nama << " || " << data[3].jurusan << " || " << data[3].lulus << endl << endl;

    //array dinamis
    cout << " Dinamis " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << data[i].NIM << " || " << data[i].Nama << " || " << data[i].jurusan << " || " << data[i].lulus << endl;
    }
    delete[] data;
    return 0;
}
