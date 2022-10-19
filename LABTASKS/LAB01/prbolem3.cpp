#include <iostream>
using namespace std;

void oddprinter(int a, int b)

{
    cout << "Odd numbers between" << a << " & " << b << ":";
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int c, d;
    cout << "Starting value:";
    cin >> c;
    cout << "Ending value: ";
    cin >> d;
    oddprinter(c, d);
    return 0;
}