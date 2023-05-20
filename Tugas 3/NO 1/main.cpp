#include <iostream>
using namespace std;

bool isOdd(int a){
    if(a%2!=0)
        return true;
    else
        return false;
}

void cariGenapTerkecil(int arr[], int size) {
    int genapterkecil = -1;
    int idx = -1;
    int temp = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] <= temp && isOdd(arr[i])==false ) {
            genapterkecil = arr[i];
            idx = i;
        }
    }
    if (idx != -1) {
        cout << "Genap Terkecil: " << arr[idx] << endl;
        cout << "Index: " << idx << endl;
    } else {
        cout << "Tidak ada angka genap" << endl;
    }
}


int main() {
    int arr[] = {4,2,3,5,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cariGenapTerkecil(arr,size);

    return 0;
}
