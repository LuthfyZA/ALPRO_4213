#include <iostream>
#include <chrono>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int minIndex(int a[], int i, int j)
{
	if (i == j)
		return i;
	int k = minIndex(a, i + 1, j);
	return (a[i] < a[k])? i : k;
}
void recurSelectionSort(int a[], int n, int index = 0)
{
	if (index == n)
	return;
    int k = minIndex(a, index, n-1);
	if (k != index)
	swap(a[k], a[index]);
	recurSelectionSort(a, n, index + 1);
}

int main()
{
	int arr[] = {11,3, 1, 12,5, 2, 7, 0, 9, 4,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
	recurSelectionSort(arr, n);
    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

	chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu yang dibutuhkan untuk eksekusi: " << duration.count() << " ms" << endl;
	int space = sizeof(arr) + sizeof(n);
    cout << "ruang yang di butuhkan: " << space << " bytes" << endl;
	for (int i = 0; i<n ; i++)
    cout << arr[i] << " ";
	cout << endl;
	return 0;
}
