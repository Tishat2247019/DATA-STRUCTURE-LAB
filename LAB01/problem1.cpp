#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        arr[n - 1] = arr[i];
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}