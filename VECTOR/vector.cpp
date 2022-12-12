#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> tishat;
    int a;

    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        tishat.push_back(a);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << tishat[i] << endl;
    }

    return 0;
}