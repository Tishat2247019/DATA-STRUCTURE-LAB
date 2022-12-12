#include <bits/stdc++.h>
using namespace std;

void change(int **a)
{
    ++(**a);
}

int main()
{

    int a = 6;
    int **ptr;
    *ptr = &a;
    change(ptr);
    cout << a << endl;
    int **ptr2;
    /* ptr2 = &ptr;
    **ptr2 = 9;
    cout << &ptr << endl;
    cout << *ptr2 << endl;
    cout << &**ptr2 << endl;
    cout << **ptr2 << endl;
    cout << *ptr << endl;
    cout << a << endl; */
    return 0;
}