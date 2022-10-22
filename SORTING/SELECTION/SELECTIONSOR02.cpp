#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 1, 4, 2, 7};
    int i, j, n = 5, loc, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = a[i];
        loc = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                loc = j;
            }
        }
        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}