#include <iostream>
using namespace std;

string tf(bool a){
    if(a==true)
        return "true";
    else
        return "false";
}

//fungsi isEven
bool isEven(int x){
    if ( x % 2 == 0)
        return true;
    else
        return false;
}

//fungsi isOdd
bool isOdd(int x){
    if ( x % 2 != 0)
        return true;
    else
        return false;
}

//fungsi isFactor
bool isFactor(int x, int f){
    return x%f ==0;
}

//fungsi MaxArray
int maxArray(int A[],int n){
    int temp = 0;
    for(int i=0; i<n; i++){
        temp = max(temp,A[i]);
    }return temp;
}

//fungsi minArray
int minArray(int A[],int n){
    int temp = 100;
    for(int i=0; i<n; i++){
        temp = min(temp,A[i]);
    }return temp;
}

//fungsi max
int maxx(int a, int b){
    int temp;
    if(a>b)
        temp=a;
    else
        temp=b;
    return temp;
}

//fungsi min
int minn(int a, int b){
    int temp;
    if(a<b)
        temp=a;
    else
        temp=b;
    return temp;
}

//fungsi sumEven
int sumEven(int A[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            sum += A[i];
        }
    }return sum;
}

//fungsi sumOdd
int sumOdd(int A[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            sum += A[i];
        }
    }return sum;
}

//fungsi Swap
void swapp(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai a: " << a << " dan " << "Nilai b: " << b;
}

//fungsi isFound
bool isFound(int A[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return true;
        }
    }return false;
}

int main()
{
    int x;
    //isEven
    cout << "Masukan bilangan genap: ";
    cin >> x;
    cout << tf(isEven(x)) << endl;

    //isOdd
    cout << "Masukan bilangan ganjil: ";
    cin >> x;
    cout << tf(isOdd(x)) << endl;

    int f;
    //isFactor
    cout << "Masukan Nilai x: ";
    cin >> x;
    cout << "Masukan Nilai f: ";
    cin >> f;
    cout << "Hasil faktor dari " << x << " dan " << f << ": " << tf(isFactor(x,f)) << endl;

    int n = 0;
    int A[n]= {};
    //maxArray
    cout << "Masukan panjang array: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "masukan array: ";
        cin >> A[i] ;
    }
    cout << endl << "max array: " << maxArray(A,n) << endl;

    //minArray
    cout << "min array: " << minArray(A,n) << endl;

    //sumEven
    cout << "sumEven : " << sumEven(A,n) << endl;

    //sumOdd
    cout << "sumOdd: " << sumOdd(A,n) << endl;

    //isFound
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;
    string cari = (isFound(A,x,n)==1) ? "Angka ditemukan" : "Angka tidak ditemukan";
    cout << cari << endl;

    int a,b;
    //max
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;
    cout << "Nilai max: " << maxx(a,b) << endl;

    //min
    cout << "Nilai min: " << minn(a,b) << endl;

    //swap
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;
    swapp(a,b);

    return 0;
}
