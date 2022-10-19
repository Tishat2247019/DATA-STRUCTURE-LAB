#include <bits/stdc++.h>
#include <cstring>
using namespace std;

string encode(string s, int j)
{
    string st = s;
    for (int i = 0; i < s.length(); i = i + 2)
    {
        st[i + 2] = s[i + 2] + 2;
    }

    return st;
}

int main()
{

    string s;
    int j = 2;
    cout << "Please input the string: ";
    getline(cin, s);
    cout << encode(s, j);

    return 0;
}