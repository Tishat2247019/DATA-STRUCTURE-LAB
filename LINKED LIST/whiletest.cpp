#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 6)
    {
        i++;
        cout << "Hello world" << endl;
    }
    do
    {
        cout << "THi" << endl;
    } while (i < 6);
    return 0;
}