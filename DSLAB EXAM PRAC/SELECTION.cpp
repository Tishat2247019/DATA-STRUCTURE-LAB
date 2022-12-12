#include <iostream>
using namespace std;

void inputarray(int *a, int s)
{
    cout << "Please enter the elements of the array : ";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
}
void printarray(int *a, int s)
{
    cout << "The sorted array is : ";
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}

void selectionarray(int *a, int s)
{
    for (int step = 0; step < s - 1; step++)
    {
        int mini_index = step;
        for (int j = step + 1; j < s; j++)
        {
            if (a[j] < a[mini_index])
            {
                mini_index = j;
            }
            int temp = a[mini_index];
            a[mini_index] = a[step];
            a[step] = a[temp];
        }
    }
}

int main()
{
    int s;
    cout << "Please enter the size of the array : ";
    cin >> s;
    int *arr = new int[s];
    inputarray(arr, s);
    selectionarray(arr, s);
    printarray(arr, s);
    return 0;
}