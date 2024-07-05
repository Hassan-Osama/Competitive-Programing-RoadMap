#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (ans.length() % 2 == 0 || ans[ans.length() - 1] != s[i])
            ans += s[i];
    }
    if (ans.length() % 2 == 1)
    {
        cout << (n - ans.length() + 1) << endl;
        ;
        cout << (ans.substr(0, ans.length() - 1)) << endl;
    }
    else
    {
        cout << (n - ans.length()) << endl;
        cout << (ans) << endl;
    }
    return 0;
}