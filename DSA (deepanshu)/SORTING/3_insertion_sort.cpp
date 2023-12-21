#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void pritnArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    cout << "Before sort" << endl;
    pritnArr(arr, 5);
    insertionSort(arr, 5);
    cout << endl;
    cout << "After sort" << endl;
    pritnArr(arr, 5);
    return 0;
}