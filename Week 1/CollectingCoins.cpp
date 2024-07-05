#include <bits/stdc++.h>

#include <iostream>

using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int m = max(a, max(b, c));
        int n;
        cin >> n;
        int sum = a + b + c + n;
        if (sum % 3 == 0 && sum / 3 >= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}