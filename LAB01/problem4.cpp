#include <iostream>
using namespace std;

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3], add[3][3];
    cout << "Please input the elements of the first array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
        cout << endl;
    }
    cout << "The first array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Please input the elements of the second array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    cout << "The second array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Please input the elements of the third array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter [" << i << "][" << j << "]: ";
            cin >> arr3[i][j];
        }
        cout << endl;
    }
    cout << "The third array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j];
        }
    }
    cout << "the addition performed matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}