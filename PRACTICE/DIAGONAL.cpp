#include <iostream>
using namespace std;

int main()
{

    int m = 5, n = 5, c = 0, sum = 0;

    int *arr = new int[m * n];
    cout << "The 5*5 matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            *(arr + i * n + j) = ++c;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << *(arr + i * n + j)
                 << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + *(arr + i * n + j);
            }
            if ((i + j) == m - 1)
            {
                sum = sum + *(arr + i * n + j);
            }
        }
    }
    cout << endl;
    cout << "The summation of the diagonal elemenets: " << sum << endl;

    delete[] arr;

    return 0;
}
