#include <iostream>
using namespace std;

int main()
{
    /*  int a[3][3];
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cout << "enter a[" << i << "][" << j << "]: ";
             cin >> a[i][j];
         }
     }
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cout << a[i][j] << " ";
         }
         cout << endl;
     } */

    int n;
    cout << "Please enter the numbrer of rows :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}