#include <iostream>
using namespace std;

int main()
{
    int check = 0;
    cout << "the prime numbers between 1 to 100:" << endl;
    for (int i = 1; i < 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check++;
                break;
            }
        }
        if (check == 0 && i != 1)
        {
            cout << i << endl;
        }
        check = 0;
    }

    return 0;
}