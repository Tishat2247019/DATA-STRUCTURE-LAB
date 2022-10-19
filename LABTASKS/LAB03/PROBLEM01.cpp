#include <iostream>
using namespace std;

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {6, 7, 8, 9}, {11, 12, 13, 14}};
    int b[4][3];
    cout << "The given matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << endl;
    cout << "The transpose matrix :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}