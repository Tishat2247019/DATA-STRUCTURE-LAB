#include <iostream>
using namespace std;

int main()
{
    int arr[15] = {1, 2, 4, 5, 6, 7, 8, 9, 10}, n = 9;
    arr[n++] = 100;
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = 300;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}