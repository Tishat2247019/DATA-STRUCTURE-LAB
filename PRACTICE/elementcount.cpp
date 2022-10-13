#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 2, 3, 3, 4, 5, 6, 7, 8};
    int count[10];
    for (int i = 0; i < 10; i++)
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
    }
    return 0;
}