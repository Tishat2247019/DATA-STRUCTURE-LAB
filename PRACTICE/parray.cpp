#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, check = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)

            {
                check++;
                break;
            }
        }
        if (check == 0 && arr[i] != 1)
        {
            cout << arr[i] << endl;
        }
        check = 0;
    }

    return 0;
}