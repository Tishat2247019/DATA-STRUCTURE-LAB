#include <iostream>
using namespace std;

void swapping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarray(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}

void selectionsort(int *a, int s)
{
    for (int step = 0; step < s - 1; step++)
    {
        int min_index = step;
        for (int i = step + 1; i < s; i++)
        {
            if (a[i] < a[min_index])
            {
                min_index = i;
            }
        }
        swapping(&a[step], &a[min_index]);
    }
}

int main()
{
    int a[5];
    cout << "Please enter the elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    printarray(a, 5);
    selectionsort(a, 5);
    cout << endl;
    printarray(a, 5);
    return 0;
}