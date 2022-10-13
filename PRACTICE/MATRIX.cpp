#include <iostream>
using namespace std;

int main()
{
    int m = 3;
    int n = 4;
    int *a = new int[m * n];
    int sum = 0, sum1 = 0, c = 0;
    cout << "The 5*5 matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(a + i * n + j) == ++c;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(a + i * 5 + j) << " ";
        }
        cout << endl;
    }
    delete[] a;
    /* for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0)
            {
                sum = sum + a[i][j];
            }
            if (i == 4)
            {
                sum = sum + a[i][j];
            }
            if (i == 0 && j >= 1 && j <= 3)
            {
                sum = sum + a[j][i];
            }
            if (i == 4 && j >= 1 && j <= 3)
            {
                sum = sum + a[j][i];
            }
        }
    }
    cout << "The summation of the side rows and columns: " << sum << endl; */
    return 0;
}