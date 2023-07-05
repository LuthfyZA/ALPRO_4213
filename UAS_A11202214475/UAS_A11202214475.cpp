#include <iostream>
using namespace std;

typedef struct mahasiswa
{
    string nama;
    string nim;
    int score[5];
    void printData(){
        cout << "Nama : " << nama <<endl;
        cout << "Nim : " << nim <<endl;
        for (int i=0;i<5;i++){
            cout << "Nilai " << i+1 << ":" << score[i] <<endl;
        }
    }

    void swapScore(int *a, int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }

    float sumScore(int *arr, int n){
        if (n == 0){
            return arr[0];
        }
        return arr[n] + sumScore(arr,n-1);

    }

     void BubbleSortRec(int *arr, int n)
    {
        if (n <= 1)
            return;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                swapScore(&arr[i], &arr[i + 1]);
        }

        BubbleSortRec(arr, n - 1);
    }

}mahasiswa;


int main() {
    cout << "Program Data Mahasiswa" << endl;
    mahasiswa m1 = {"luthfy zulkarnaen A", "A11.2020.14475", {90,91,99,75,80}};
    cout << "\nSebelum swap" << endl;
    m1.printData();

    cout << "\nSetelah swap" << endl;
    m1.swapScore(&m1.score[0], &m1.score[4]);
    m1.printData();


    int n = sizeof(m1.score)/sizeof(m1.score[0]);
    cout << "\nNilai rata-rata :" << m1.sumScore(m1.score, n)/n << endl;


    cout << "\nSetelah Sorting" << endl;
    m1.BubbleSortRec(m1.score,n);
    m1.printData();

    cout<<"\nluthfy zulkarnaen A"<<endl;
    cout<<"A11.2022.14475"<<endl;
    cout<<"A11.4213"<<endl;

    return 0;
}
