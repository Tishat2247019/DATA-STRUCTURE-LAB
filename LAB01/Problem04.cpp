#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 2, 3, 3, 4, 5, 6, 7, 8}, a, counter = 0;
    int count[10];
    cout << "please enter a number to search: ";
    cin >> a;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == a)
        {
            for (int j = i; j < 10; j++)
            {
                if (arr[i] == arr[j])
                {
                    counter++;
                }
            }
        }
    }
    cout << counter << endl;
    if (counter >= 1)
    {
        cout << counter << " times in the array" << endl;
    }
    else
    {
        cout << " is not in the array" << endl;
    }

    /* for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        int counter = 0;
        if (count[i] == 0)
        {

            for (int j = i; j < 10; j++)
            {
                if (arr[j] == arr[i])
                {

                    counter++;
                    count[j] = 1;
                }
            }
            cout << arr[i] << "= " << counter << " times" << endl;
        }
    } */
    return 0;
}