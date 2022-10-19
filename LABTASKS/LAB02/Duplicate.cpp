#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 3, 3, 3, 1, 6}, arr2[6], count = 0;
    for (int i = 0; i < 6; i++)
    {
        int j;
        for (j = 0; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j];
                count++;
                break;
            }
        }
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }
    /* cout << count << endl; */
    if (count == 0)
    {
        cout << "array already unique" << endl;
    }
    /* for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    } */
    return 0;
}