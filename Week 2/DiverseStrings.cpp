#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        string s;
        cin >> s;
        set<char> hs;
        char mi = 'z';
        char ma = -1;
        for (int i = 0; i < s.size(); i++)
        {
            hs.insert(s[i]);
            mi = min(mi, s[i]);
            ma = max(ma, s[i]);
        }
        if (ma - mi + 1 == s.size() && s.size() == hs.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}