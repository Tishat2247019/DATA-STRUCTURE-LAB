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
        for (int j = step + 1; j < s; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
         swapping(&a[min_index], &a[step]);
        /*int temp = a[min_index];
        a[min_index] = a[step];
        a[step] = temp;*/
    }
}
int main()
{
    int a[10] = {3, 1, 6, 4, 8, 9, 5, 2, 7, 10};
    int s = 10;
    selectionsort(a, s);
    printarray(a, s);

    return 0;
}
