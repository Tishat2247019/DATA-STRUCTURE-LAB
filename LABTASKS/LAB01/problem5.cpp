#include <iostream>
using namespace std;
void factorialcal(int a)
{
    int d = 1;
    bool flag = true;
    for (int i = 2; i < a; i++)
    {

        if (a % i == 0)
        {
            flag = false;
        }
    }
    if (flag && a >= 2)
    {

        for (int j = 1; j <= a; j++)
        {
            d = d * j;
        }
        cout << d << endl;
    }
    else
    {
        cout << "Error! This is not a prime number!" << endl;
    }
}

int main()
{
    int c;
    cout << "Please enter a number: ";
    cin >> c;
    factorialcal(c);
    return 0;
}