#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string s = "abcacba";
    int m = min(a / 3, min(b / 2, c / 2));
    a -= m * 3;
    b -= m * 2;
    c -= m * 2;
    int ma = 0;
    for (int start = 0; start < 7; start++)
    {
        int tmpa = a;
        int tmpb = b;
        int tmpc = c;
        int i = start;
        int days = 0;
        while (i + 1 % 7 != start)
        {
            if (s[i % 7] == 'a' && tmpa)
                tmpa--;
            else if (s[i % 7] == 'b' && tmpb)
                tmpb--;
            else if (s[i % 7] == 'c' && tmpc)
                tmpc--;
            else
                break;
            i++;
            days++;
        }
        ma = max(days, ma);
    }
    cout << m * 7 + ma << endl;
    return 0;
}