#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &b = a;
    b = 10;
    int *p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << *p << endl;
    return 0;
}