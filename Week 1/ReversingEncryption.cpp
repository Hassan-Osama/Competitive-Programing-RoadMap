#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            reverse(s.begin(), s.begin() + i);
        }
    }
    cout << s << endl;
    return 0;
}