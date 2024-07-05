#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int c = 0;
    for (int i = n - 1; i > n - y - 1; i--)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            c++;
        }
    }
    if (s[n - y - 1] == '0')
    {
        s[n - y - 1] = '0';
        c++;
    }
    for (int i = n - y - 2; i > n - x - 1; i--)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            c++;
        }
    }
    cout << c << endl;
}