#include <iostream>
#include <chrono>

using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int len = 20;
    int arr[len] = {1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int key = 15;

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    int index = linearSearch(arr, len, key);
    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu yang dibutuhkan untuk eksekusi: " << duration.count() << " ms" << endl;

    int space = sizeof(arr) + sizeof(len);
    cout << "ruang yang di butuhkan: " << space << " bytes" << endl;

    if (index != -1) {
        cout << "Key ditemukan di indeks ke-" << index << endl;
    }
    else {
        cout << "Key tidak ditemukan" << endl;
    }

    return 0;
}
