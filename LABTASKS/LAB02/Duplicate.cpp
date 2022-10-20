#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 5, 8, 9, 10, 11}, counter = 0;
    for (int i = 0; i < 10; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j];
                counter++;
                break;
            }
        }
    }
    if (counter == 0)
    {
        cout << "The array is already unique" << endl;
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            int j;
            for (j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    break;
                }
            }
            if (i == j)
            {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}
