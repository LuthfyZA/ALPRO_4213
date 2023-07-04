#include <iostream>
#include<chrono>
using namespace std;

void Merge(int * a, int low, int high, int mid) {
    int i, j, k, temp[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        } else {
            temp[k] = a[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = a[i];
        k++;
        i++;
    }

    while (j <= high) {
        temp[k] = a[j];
        k++;
        j++;
    }


    for (i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}

void MergeSort(int * a, int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, high, mid);
    }
}

int main() {
    int arr[] = {11,13,3, 1, 12,5, 2, 7, 0, 9, 4,10,14};
	int n = sizeof(arr)/sizeof(arr[0]);

	chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    MergeSort(arr, 0, n - 1);
    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

	chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu yang dibutuhkan untuk eksekusi: " << duration.count() << " ms" << endl;

	int space = sizeof(arr) + sizeof(n);
    cout << "ruang yang di butuhkan: " << space << " bytes" << endl;

    int i;
    cout<<"Sorted array : \n";
    for (int i = 0; i<n ; i++)
		cout << arr[i] << " ";
	cout << endl;
    return 0;
}
