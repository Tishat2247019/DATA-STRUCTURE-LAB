#include <iostream>
using namespace std;

int main()
{
    int a[10], counter1 = 0, counter2 = 0;
    cout << "please input the elements off the array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            counter1++;
        }
        else
        {
            counter2++;
        }
    }
    /* for (int i = 0; i < 10; i++)
    {

    } */
    cout << counter1 << " even numbers" << endl;
    cout << counter2 << " odd numbers" << endl;

    return 0;
}