#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 45, 0, 11, 9};
    int n = 5;
    bubblesort(arr, n);
    cout << "Sorted array in ascending order" << endl;
    printarray(arr, n);

    return 0;
}