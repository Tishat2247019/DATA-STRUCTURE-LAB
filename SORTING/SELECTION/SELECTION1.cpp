#include <bits/stdc++.h>
using namespace std;

void swapping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_in;
    for (i = 0; i < n; i++)
    {
        min_in = i;
        for (j = i + 1; j < n; j++)
        
            if (arr[j] < arr[min_in])
                min_in = j;
            swapping(&arr[i], &arr[min_in]);
        
    }
}
int main(int argv, char *argc[])
{
    int arr[] = {5, 2, 4, 3, 6};
    int i, j, n, temp;
    n = sizeof(arr) / sizeof(int);
    cout << "Unsorted Array :";
    print(arr, n);
    selectionSort(arr, n);
    cout << "Sorted Array :";
    print(arr, n);
    return (0);
}